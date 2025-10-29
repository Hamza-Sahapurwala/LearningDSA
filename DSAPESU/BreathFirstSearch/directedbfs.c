#include<stdio.h>
#include<stdlib.h>
#define max 50
int visited[max]={0};
typedef struct node{
    int data;
    struct node* link;
}node;

void bfs(int v, int n, node* a){
    node* q=NULL, *list;
    int u;
    visited[v]=1;
    q=insertrear(v,q);
    printf("%d is visited\n",v);
    while(q!=NULL){
        u=q->data;
        q=deletefront(q);
        list=a[u];
        while(list!=NULL){
            u=list->data;
            if(visited[v]==0){
                visited[v]=1;
                q=insertrear(v,q);
                printf("%d\t",v);
            }
            list=list->link;
        }
    }
}

node* deletefront(node* a){
    node* temp = a->link;
    node* first = a;
    free(first);
    a=temp;
    return a;
}

node* insertrear(int v, node*a){
    node*temp = malloc(sizeof(node));
    temp->data=v;
    temp->link=NULL;
    if(a==NULL){
        a=temp;
        return a;
    }
    node* cur=a;
    while(cur->link!=NULL){
        cur=cur->link;
    }
    cur->link=temp;
    return a;
}

void insert(node* a[], int s, int d){
    node* temp = malloc(sizeof(node));
    temp->data=d;
    temp->link=NULL;
    node* cur=a[s];
    if(cur==NULL){
        a[s]=temp;
    }
    while(cur->link!=NULL){
        cur=cur->link;
    }
    cur->link=temp;
}

void creategraph(node* a[], int n){
    int src,des;
    for (int i = 0; i < n; i++)
    {
        a[i]=NULL;
    }
    while(1){
        printf("Enter source and destination:\n");
        scanf("%d%d",&src, &des);
        if(src<0||des<0||src>=n||des>=n){
            printf("Exiting cause of bad input");
            break;
        }
        insert(a,src,des);
    }
}

int main(){
    node* a[max];
    int n,v;
    printf("Enter no. of vertices:\n");
    scanf("%d",&n);
    creategraph(a,n);
    printf("Enter starting vertex:\n");
    scanf("%d",&v);
    bfs(v,n, a);
}