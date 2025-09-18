#include<stdio.h>
#include<stdlib.h>

typedef struct btree{
    int data;
    struct btree *rlink, *llink;
}t;

t* createnode(int data){
    t* temp = malloc(sizeof(t));
    temp->data=data;
    temp->llink=temp->rlink=NULL;
    return temp;
}

void inorder_traversal(t* tree){ // * Left -> Root -> Right
    if(tree==NULL)
        return;
    inorder_traversal(tree->llink);
    printf("%d\n",tree->data);
    inorder_traversal(tree->rlink);
}

void inorderwithoutrecursion(t* root){
    t* s[50], *cur; // * We use stack
    int top=-1;
    if(root==NULL){
        return;
    }
    cur=root;
    for(;;){
        while(cur!=NULL){
            s[++top]=cur;
            cur=cur->llink;
        }
        if(top!=-1){
            cur=s[top--];
            printf("%d\n", cur->data);
            cur=cur->rlink;
        }
    }
}

void postorder_traversal(t* tree){ // * Left -> Right -> Root
    if(tree==NULL)
        return;
    postorder_traversal(tree->llink);
    postorder_traversal(tree->rlink);
    printf("%d\n",tree->data);
}

void preorder_traversal(t* tree){ // * Root -> Left -> Right
    if(tree==NULL)
        return;
    printf("%d\n",tree->data);
    preorder_traversal(tree->llink);
    preorder_traversal(tree->rlink);
}

void preorderwithoutrecursion(t* root){
    t* s[50], *cur; // * We use stack
    int top=-1;
    if(root==NULL){
        return;
    }
    cur=root;
    for(;;){
        while(cur!=NULL){ // * Only for left sided nodes
            printf("%d\n", cur->data);
            s[++top]=cur;
            cur=cur->llink;
        }
        if(top!=-1){
            cur=s[top--];
            cur=cur->rlink;
        }
        if(top==-1){
            return;
        }
    }
}

int main(){
    t *root = createnode(10);
    root->llink = createnode(1);
    root->rlink = createnode(2);
    printf("In-Order Traversal:(Left->Root->Right)\n");
    inorder_traversal(root); // * 1 10 2 For Inorder traversal
    printf("Post-Order Traversal:(Left -> Right -> Root)\n");
    postorder_traversal(root);
    printf("Pre-Order Traversal:(Root->Left->Right)\n");
    preorder_traversal(root);
}