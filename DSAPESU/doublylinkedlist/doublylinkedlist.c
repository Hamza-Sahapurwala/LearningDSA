#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    struct node* lastnode;
    int data;
    struct node* nextnode;
}node;

typedef struct doublylinkedlist
{
    node* head;
    int noofnodes;
}dlist;

void init(dlist* a){
    a->head=NULL;
    a->noofnodes=0;
}

void insertatfront(dlist* a, int d){
    node* temp = malloc(sizeof(node));
    temp->data=d;
    temp->lastnode=NULL;
    temp->nextnode=a->head;
    if(a->head==NULL){
        a->head=temp;
        return;
    }
    a->head->lastnode=temp;
    a->head=temp;
    a->noofnodes++;
}

void insertatback(dlist* a, int d){
    node* temp = malloc(sizeof(node));
    temp->data=d;
    temp->nextnode=NULL;
    temp->lastnode=NULL;
    if(a->head==NULL){
        a->head=temp;
        return;
    }
    node* cur = a->head;
    while(cur->nextnode!=NULL){
        cur=cur->nextnode;
    }
    cur->nextnode=temp;
    temp->lastnode=cur;
    a->noofnodes++;
}

void display(dlist* a){
    node* cur=a->head;
    while(cur!=NULL){
        printf("Data = %d\n",cur->data);
        cur=cur->nextnode;
    }
}

int main(){
    dlist l;
    init(&l);

}
