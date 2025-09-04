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