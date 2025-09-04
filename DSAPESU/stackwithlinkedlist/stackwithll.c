#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node* next;
}node;

typedef struct stack{
    node* head;
}s;

void init(s* a){
    a->head=NULL;
}

void push(s* a, int ele){ // * Insert at Front
    node* temp = malloc(sizeof(node));
    temp->data=ele;
    temp->next = a->head;
    a->head=temp;
}

int pop(s* a){ // * Delete at front
    if(a->head!=NULL){
    node* fir = a->head;
    node* sec = fir->next;
    int x = fir->data;
    free(fir);
    a->head=sec;
    return x;
    }
    return 999999;
}

void display(s* a){
    if(a->head!=NULL){
    node* cur = a->head;
    while(cur!=NULL){
        printf("%d\n", cur->data);
        cur = cur->next;
    }
    return;
    }
    printf("Empty Stack\n");
}

int main(){
    s stack;
    init(&stack);
    push(&stack, 5);
    display(&stack);
}