#include<stdio.h>
#include<stdlib.h>

int n,f,r,visited[50], queue[50], a[50][50];

int check_cyclic_bfs(){
    for (int i = 0; i < n; i++)
    {
        visited[i] = 0;
    }
    f=0,r=-1;
    queue[++r] = 0;
    visited[0]=1;
    while (f<=r)
    {
        int v=queue[f++];
        for(int u=0;u<n;u++){
            if(a[v][u]==1){
                if(!visited[u]){
                    visited[u]=1;
                    queue[++r] =u;
                }
                else{
                    return 1;
                }
            }
        }
    }
}
