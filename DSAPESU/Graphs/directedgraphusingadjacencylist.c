#include<stdio.h>
#include<stdlib.h>
#define MAX 100

typedef struct node{
    int data;
    struct node *link;
}nd;

void insert(nd* a[], int i, int j){
    nd* temp = malloc(sizeof(nd));
    temp->data = j;
    temp->link = NULL;
    nd* cur = a[i];
    if(cur==NULL){
        a[i]=temp;
        return;
    }
    while(cur->link!=NULL){
        cur=cur->link;
    }
    cur->link=temp;
}

void creategraph(nd* a[], int n){
    int i,j;
    for (int i = 0; i < n; i++)
    {
        a[i]=NULL;
    }
    while(1){
        printf("Enter sourse and destination:");
        scanf("%d%d",&i,&j);
        if(i<0||j<0||i>=n||j>=n)
            break;
        insert(a,i,j);
    }
    
}

void display(nd* a[], int n){
    for (int i = 0; i < n; i++)
    {
        nd* cur = a[i];
        printf("%d\t",i);
        while(cur!=NULL){
            printf("%d\t",cur->data);
            cur=cur->link;
        }
        printf("\n");
    }
    
}

int indegree(nd *a[],int v, int n){
    int count =0;
    for (int i = 0; i < n; i++)
    {
        nd* cur = a[i];
        while(cur!=NULL){
            if (cur->data==v)
            {
                ++count;
            }
            cur=cur->link;
        }
    }
    return count;
}

int outdegree(nd* a[], int v, int n){
    int count=0;
    nd* cur = a[v];
    while (cur!=NULL)
    {
        ++count;
        cur=cur->link;
    }
    return count;
}

int main(){
    int n,v;
    nd *a[MAX];
    printf("Enter no. of vertices: ");
    scanf("%d",&n);
    creategraph(a,n);
    display(a, n);
    printf("Enter vertex to calculate indegree:");
    scanf("%d", &v);
    int i = indegree(a,v,n);
    printf("%d",i);
    printf("Enter vertex to calculate outdegree:");
    scanf("%d", &v);
    int o = indegree(a,v,n);
    printf("%d",o);
}