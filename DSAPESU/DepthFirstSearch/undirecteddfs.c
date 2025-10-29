#include<stdio.h>
#include<stdlib.h>
#define max 50

int visited[max]={0};
int a[max][max];
int n;

void dfs(int v){
    visited[v]=1;
    printf("%d is visited\n",v);
    for(int i=0;i<n;i++){
        if(a[v][i]==1 && visited[i]==0){
            dfs(i);
        }
    }
}

