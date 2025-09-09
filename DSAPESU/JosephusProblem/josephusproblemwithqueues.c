#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node* next;
}node;

typedef struct josephus{
    node* head;
}j;

void create(j* a){
    node* temp;
    node* rear;
    int d, ch;
    do{
        printf("Enter a no.\n");
        scanf("%d",&d);
        temp = malloc(sizeof(node));
        temp->data=d;
        temp->next=NULL;
        if(a->head==NULL){
            a->head=temp;
        }
        else{ // * Inserts at the end of Queue
            rear->next = temp;
        }
        rear = temp;
        printf("Do you want to continue?\n");
        scanf("%d",&ch);
    }while(ch!=0);
    rear->next=a->head; // * Circular LL
}

int whowillsurvive(j* a, int s){
    node *p, *q;
    int i;
    q=p=a->head;
    while(p->next!=p){
        for(int i=1;i<s;i++){
            q=p;
            p=p->next;
        }
        q->next = p->next;
        printf("%d has been killed\n", p->data);
        free(p);
        p=q->next;
    }
    a->head = p;
    return p->data;
}

void main(){
    j queue;
    queue.head=NULL;
    int survivor, skip;
    create(&queue);
    printf("Enter the no. of persons to be skipped:\n");
    scanf("%d",&skip);
    survivor = whowillsurvive(&queue, skip);
    printf("%d survived the genocide!", survivor);
}