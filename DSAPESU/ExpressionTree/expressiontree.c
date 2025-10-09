#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define MAX 100

typedef struct node{
    char data;
    struct node* l;
    struct node* r;
}node;

int eval(node* a){
    int num;
    switch(a->data){
        case '+':
        return(eval(a->l)+eval(a->r));
        case '-':
        return(eval(a->l)-eval(a->r));
        case '*':
        return(eval(a->l)*eval(a->r));
        case '/':
        return(eval(a->l)/eval(a->r));
        default:
        if(isalpha(a->data)){
            printf("%c",a->data);
            scanf("%d",&num);
            return(num);
        }
        else{
            return(a->data-'0');
        }
    }
}

int main(){
    node* root = NULL;
    node* temp;
    int top=-1;
    node* stack[MAX];
    int ele,i=0;
    char postfix[MAX], symb;
    scanf("%s",postfix);
    while((symb=postfix[i])!='\0')
    {
        node* temp=malloc(sizeof(node));
        temp->data=symb;
        temp->r = temp->l=NULL;
        if(isalnum(symb)){
            stack[++top] = temp;
        }
        else{
            temp->r = stack[top--];
            temp->l = stack[top--];
            stack[++top] = temp;
        }
        i++;
    }
    root = stack[top];
    int r = eval(root);
    printf("%d",r);
}