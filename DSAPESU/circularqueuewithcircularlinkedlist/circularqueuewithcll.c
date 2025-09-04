#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node* next;
}node;

typedef struct circularqueuewithcll
{
    node* front;
    node* rear;
}cq;

void enqueue(cq* a, int ele){
    node* temp=malloc(sizeof(node));
    temp->data=ele;
    temp->next=NULL;
    if(a->front == NULL && a->rear==NULL){
        a->front=a->rear=temp;
        return;
    }
    temp->next=a->front;
    a->rear->next=temp;
    a->rear = temp;
}

void display(cq* a){
    if(a->front==NULL){
        printf("Empty Circular Queue");
        return;
    }
    node* cur = a->front;
    printf("%d",cur->data);
    cur=cur->next;
    while(cur!=a->front){
        printf("%d",cur->data);
        cur=cur->next;;
    }
}

int dequeue(cq* a){
    if(a->front==NULL){
        printf("Empty List");
        return 99999;
    }
    else if(a->front==a->rear){
        int x = a->front->data;
        a->front=a->rear=NULL;
        return x;
    }
    node* f = a->front;
    node* s = f->next;
    int x = f->data;
    a->rear->next=s;
    free(f);
    a->front=s;
    return x;
}
