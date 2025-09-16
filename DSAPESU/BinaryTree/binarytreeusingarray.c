#include<stdio.h>
#include<stdlib.h>
#define size 20

typedef struct btree{
    int tree[size];
    int lastindex; // * Keeps track of last inserted node
}t;

void init(t* bt){
    bt->lastindex=-1;
}

void insert(t* bt, int data){
    if(bt->lastindex+1>=size){
        printf("Tree is Full\n");
        return;
    }
        bt->tree[++bt->lastindex] = data;
}

void inorder(t* bt, int index){
    if(index<=bt->lastindex){
        int left = 2 * index + 1;
        int right = 2 * index + 2;
        if(left<=bt->lastindex){
            inorder(bt, left);
        }
        printf("%d\n",bt->tree[index]);
        if(right<=bt->lastindex){
            inorder(bt, right);
        }
    }
}


void postorder(t* bt, int index){
    if(index<=bt->lastindex){
        int left = 2 * index + 1;
        int right = 2 * index + 2;
        printf("%d\n",bt->tree[index]);
        if(left<=bt->lastindex){
            postorder(bt, left);
        }
        if(right<=bt->lastindex){
            postorder(bt, right);
        }
    }
}

void preorder(t* bt, int index){
    if(index<=bt->lastindex){
        int left = 2 * index + 1;
        int right = 2 * index + 2;
        if(left<=bt->lastindex){
            preorder(bt, left);
        }
        if(right<=bt->lastindex){
            preorder(bt, right);
        }
        printf("%d\n",bt->tree[index]);
    }
}

int main(){
    t bt;
    init(&bt);
    insert(&bt,1);
    insert(&bt,2);
    insert(&bt,3);
    insert(&bt,4);
    insert(&bt,5);
    insert(&bt,6);
}