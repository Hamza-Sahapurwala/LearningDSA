#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    char data;
    struct node* l;
    struct node* r;
}node;

typedef struct stack{
    node **ar;
    int top;
    int size;
}stack;



node* createexprestree(char* c){
    stack* s[100];

}

int main(){
    char expres[100];
    node* root = createxprestree(expres);
}