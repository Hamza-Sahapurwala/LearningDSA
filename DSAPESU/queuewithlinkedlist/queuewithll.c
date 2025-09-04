#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node* next;
}node;

typedef struct queue{
    node* front;
    node* rear;
}q;

void init(q* a){
    a->rear=NULL;
    a->front=NULL;
}

void enqueue(q* a, int ele){ // * Insert at rear
    node* temp = malloc(sizeof(node));
    temp->data=ele;
    temp->next = NULL;
    if(a->front==NULL && a->rear==NULL){
        a->front=a->rear=temp;
    }
    else{
        a->rear->next = temp;
        a->rear = temp;
    }
}

int dequeue(q* a){ // * Delete at front
    if(a->front==NULL &&a->rear == NULL){
        printf("Underflow");
        return 999999;
    }
    else if(a->front == a->rear){
        int x = a->front->data;
        free(a->front);
        a->front=a->rear=NULL;
    }
    else{
    node* fir = a->front;
    node* sec = fir->next;
    int x = fir->data;
    free(fir);
    a->front=sec;
    return x;
    }
}

void display(q* a){
    if(a->front!=NULL && a->rear!=NULL){
    node* cur = a->front;
    while(cur!=NULL){
        printf("%d\n", cur->data);
        cur = cur->next;
    }
    return;
    }
    printf("Empty Queue\n");
}

int main(){
    q queue;
    init(&queue);
    enqueue(&queue, 5);
    display(&queue);
}