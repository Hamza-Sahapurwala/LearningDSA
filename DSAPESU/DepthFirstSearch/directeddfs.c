typedef struct node{
    int data;
    struct node* link;
}node;

int visited[50]={0};

void dfs(int v){
    node* temp;
    visited[v]=1;
    printf("%d is visited\n",v);
    temp=a[v];
    while(temp!=NULL){
        if(visited[temp->data]==0){
            dfs(temp->data);
        }
        temp=temp->link;
    }
}