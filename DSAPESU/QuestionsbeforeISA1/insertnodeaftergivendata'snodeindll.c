#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *next,*last;
}node;

typedef struct dll{
    node* head;
}l;

void insertaftery(l*a, int x, int y){
    node* temp = malloc(sizeof(node));
    temp->data=x;
    temp->next=temp->last=NULL;
    node* cur = a->head;
    while(cur->next!=NULL && cur->data!=y){
        cur=cur->next;
    }
    node* n = cur->next;
    temp->last = cur;
    temp->next = n;
    cur->next = temp;
    n->last = temp;
}