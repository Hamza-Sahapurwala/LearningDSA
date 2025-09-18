#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node* next;
}node;

typedef struct ll{
    node* head;
}ll;

void concatenate(ll*a, ll*b){
    node* cur = a->head;
    while(cur->next!=NULL){
        cur=cur->next;
    }
    cur->next=b->head;
}
