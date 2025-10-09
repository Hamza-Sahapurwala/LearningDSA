#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node* rlink;
    struct node* llink;
    int rthread, lthread;
}node;

typedef struct tree{
    node* root;
}t;

t* initialize(){
    t* temp = malloc(sizeof(node));
    temp->root = NULL;
    return(temp);
}

void creat(t* a, int d){
    node* temp = malloc(sizeof(node));
    temp->data = d;
    temp->rlink=temp->llink=NULL;
    temp->rthread=temp->lthread=1;
    node* cur = a->root;
    if(cur==NULL){
        a->root = temp;
        return;
    }
    while(1){
        if(d < cur->data){
            if(cur->lthread==0){
                cur=cur->llink;
            }
            else{
                break;
            }
        }
        else{
            if(cur->rthread==0){
                cur=cur->rlink;
            }
            else{
                break;
            }
        }
        if(d < cur->data){
            temp->rlink =cur;
            temp->llink = cur->llink;
            cur->llink=temp;
            cur->lthread=0;
        }
        else{
            temp->rlink=cur->rlink;
            temp->llink=cur;
            cur->rlink=temp;
            cur->rthread=0;
        }
    }
}

int main(){
    t* root = initialize();
    int ch, ele;
    
}