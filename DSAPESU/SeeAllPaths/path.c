#include<stdio.h>
#include<stdlib.h>

int vis[50], path[50],k=-1,n,a[50][50],v;
typedef struct node{
    int data;
    struct node* next;
}node;

void printpath(int src, int des){
    for(int i=0;i<n;i++){
        vis[i]=0;
    }
    int k =0;
    printf("All paths from %d to %d",src,des);
    printpathsdfs(src,des);
}

void printallpathsdfs(int src, int des){
    vis[v]=1;
    if(v==0){
        for(int i=0;i<k;i++){
            printf(path[i]);
        }
    }
    else{
        node* temp = a[v];
        while(temp!=NULL){
            if(!vis[temp->data]){
                printallpathdfs(temp->data,des);
            }
            temp=temp->next;
        }
    }
    k--;
    vis[v]=0;
}
