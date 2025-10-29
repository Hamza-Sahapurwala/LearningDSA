#include<stdio.h>
#include<stdlib.h>
#define MAX 50

int visited[MAX] = {0};
int a[MAX][MAX];

int f=0,r=-1;
int queue[MAX];

void bfs(int v, int n){
    visited[v]=1;
    printf("%d is visited\n",v);
    queue[++r]=v;
    while(f<=r){
        v=queue[f++];
        for(int u=0;u<n;u++){
            if(a[v][u]==1){
                if(visited[u]==0){
                    queue[++r] =u;
                    visited[u]=1;
                    printf("%d\t",u);
                }
            }
        }
    }
}

void create_matrix(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
}

void display(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int src, des, v, n;
    printf("Enter no. of vertices:\n");
    scanf("%d",&n);
    printf("Enter Graph elements: \n");
    create_matrix(n);
    display(n);
    printf("Enter starting vertex:");
    scanf("%d",&v);
    bfs(v, n);
}