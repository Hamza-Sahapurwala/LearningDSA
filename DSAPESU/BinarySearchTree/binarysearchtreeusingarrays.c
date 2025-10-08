#include<stdio.h>
#include<stdlib.h>

void insert(int *a, int x){
    int i = 0;
    while(a[i]!=-1){
        if(x<a[i]){
            i=2*i+1;
        }
        else{
            i=2*i+2;
        }
    }
    a[i]=x;
}

void preorder(int *a, int i){
    while(a[i]!=-1){
        printf("%d\n",a[i]);
        preorder(a, 2*i+1);
        preorder(a, 2*i+2);
    }
}

void inorder(int *a, int i){
    while(a[i]!=-1){
        inorder(a, 2*i+1);
        printf("%d\n",a[i]);
        inorder(a, 2*i+2);
    }
}

void postorder(int *a, int i){
    while(a[i]!=-1){
        postorder(a, 2*i+1);
        postorder(a, 2*i+2);
        printf("%d\n",a[i]);
    }
}

int main(){
    int bst[100];
    int ch, x, i;
    for(int i =0;i<100;i++){
        bst[i]=-1;
    }

}