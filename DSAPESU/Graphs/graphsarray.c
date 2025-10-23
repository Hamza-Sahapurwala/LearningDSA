#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define MAX 100

void addEdge(int g[MAX][MAX], int s, int e){
    g[s][e] = 1;
    // g[e][s] = 1; // add this line for undirected graph 
}

void display(int g[MAX][MAX], int v){
    for (int i = 0; i < v; i++)
    {
        for (int j = 0; j < v; j++)
        {
            printf("%d\t",g[i][j]);
        }
        printf("\n");
    }
    
}

int main(){
    int vertices, edges;
    printf("Enter no. of vertices:");
    scanf("%d",&vertices);
    if(vertices<=0 || vertices > MAX){
        printf("Invalid");
        return 0;
    }
    printf("Enter no. of edges:");
    scanf("%d",&edges);
    int graph[MAX][MAX]={0};
    for(int i=0;i<edges;i++){
        int start,end;
        printf("Enter Edge %d(start end)",i+1);
        scanf("%d%d",&start,&end);
        if(start<0 || start >=vertices || end <0 || end >=vertices){
            printf("Invalid");
            i--;
            continue;
        }
        addEdge(graph, start,end);
    }
    display(graph, vertices);
}