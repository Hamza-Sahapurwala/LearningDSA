#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *next,*last;
}node;

typedef struct cll{
    node* head;
}l;

int dellast(l*a){
    node* lastnode = a->head->last;
    node* newlast = lastnode->last;
    newlast->next = a->head;
    a->head->last = newlast;
    int x = lastnode->data;
    free(lastnode);
    return x;
}