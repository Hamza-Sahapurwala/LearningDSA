#include<stdio.h>
#include<stdlib.h>

int visited[50], path[50],k=-1,n,a[50][50];

void printpaths(int src, int des){
    visited[src]=1;
    path[k++]=src; 
    if(src==des){
        for(int i=0;i<k;i++){
            printf("%d\t",path[i]);
        }
        printf("\n");
    }
    else{
        for(int u=0;u<n;u++){
            if(a[src][u]==1 && visited[u]==0){
                printpaths(u,des);
            }
        }
    }
    k--;
    visited[src]=0;
}
