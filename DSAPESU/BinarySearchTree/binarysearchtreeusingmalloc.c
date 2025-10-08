#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node* l;
    struct node* r;
}node;

void insert(node** a, int n){
    node* temp = malloc(sizeof(node));
    temp->data=n;
    temp->l=temp->r=NULL;
    if(*a==NULL){
        *a=temp;
        return;
    } 
    node* prev = NULL;
    node* cur = *a;
    while(cur!=NULL){
        prev = cur;
        if(n < cur->data){
            cur= cur->l;
        }
        else{
            cur=cur->r;
        }
    }
    if(n<prev->data){
        prev->l=temp;
    }
    else{
        prev->r=temp;
    }
}

void inorder(node* a){
    if(a!=NULL){
        inorder(a->l);
        printf("%d\n", a->data);
        inorder(a->r);
    }
}

void postorder(node* a){
    if(a!=NULL){
        postorder(a->l);
        postorder(a->r);
        printf("%d\n", a->data);
    }
}

void preorder(node* a){
    if(a!=NULL){
        printf("%d\n", a->data);
        preorder(a->l);
        preorder(a->r);
    }
}

node* delete(node** a, int key){
    node* cur = *a;
    node* succ;
    node*parent = NULL;
    node* succparent;
    while(cur!=NULL && cur->data!=key){ // * Finding the traversal tree
        parent = cur;
        if(key < cur->data){
            cur=cur->l;
        }
        else{
            cur=cur->r;
        }
    }
    if(cur==NULL){
        printf("Key not found\n");
        return a;
    }
    else if(cur->l!=NULL && cur->r!=NULL){ // * if the node has 2 child nodes
        succparent = cur;
        succ= cur->r;
        while(succ->l!=NULL){
            succparent = succ;
            succ = succ->l;
        }
        cur->data=succ->data;
        cur=succ;
        parent = succparent;
    }
    node* child;
    if(cur->l!=NULL){
        child = cur->l;
    }
    else{
        child=cur->r;
    }
    if(parent==NULL){
        free(cur);
        return child;
    }
    if(cur==parent->l){
        parent->l=child;
    }
    else{
        parent->r=child;
    }
    free(cur);
    printf("Node deleted is %d\n",key);
    return a;
}

int main(){
    int num = 6;
    node* root = NULL;
    insert(&root, num);
}