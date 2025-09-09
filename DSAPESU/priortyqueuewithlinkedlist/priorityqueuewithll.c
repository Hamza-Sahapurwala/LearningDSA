#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    int prio;
    struct node* next;
}node;

typedef struct priorityqueue{
    node* head;
}pq;

void enqueue(pq* a, int ele, int p){
    node* t = malloc(sizeof(node));
    t->data=ele;
    t->prio=p;
    t->next=NULL;
    if(a->head==NULL){
        a->head=t;
    }
    else if(p<a->head->prio){
        t->next=a->head;
        a->head=t;
    }
    else{
        node* cur=a->head;
        node* prev=NULL;
        while(cur!=NULL && p>cur->prio){
            prev=cur;
            cur=cur->next;
        }
        prev->next=t;
        t->next=cur;
    }
}

int dequeue(pq* a){ // * Deletion of front
    int x = 9999;
    if(a->head==NULL){
        return x;
    }
    node* f = a->head;
    node* s = f->next;
    x = f->data;
    free(f);
    a->head=s;
}

void display(pq* a){
    if(a->head==NULL){
        printf("Empty List\n");
        return;
    }
    else{
        node* cur = a->head;
        while(cur!=NULL){
            printf("%d\n",cur->data);
            cur=cur->next;
        }
    }
}