#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node* next;
}node;

typedef struct list
{
    node* head;
}list;

void initialize_linked_list(list* a){
    a->head=NULL;
}

void insert_from_front(list* a, int d){
    node* temp = malloc(sizeof(node));
    temp->data=d;
    temp->next=a->head;
    a->head=temp;
}

void insert_from_rear(list* a, int d){
    node* temp = malloc(sizeof(node));
    temp->data=d;
    temp->next=NULL;
    node* cur = a->head;
    if(a->head==NULL){
        a->head=temp;
        return;
    }
    while(cur->next!=NULL){
        cur=cur->next;
    }
    cur->next=temp;
}

void display(list* a){
    node* cur=a->head;
    if(cur==NULL){
        printf("Empty List\n");
        return;
    }
    while(cur!=NULL){
        printf("Data = %d\n",cur->data);
        cur=cur->next;
    }
}

int delete_front_node(list* a){
    int n=0;
    if(a->head==NULL){
        printf("Empty List\n");
        return 9999;
    }
    node* first = a->head;
    n=first->data;
    node* second = first->next;
    free(first); // This is first cause if we do a->head = second, then first will be equal to second and it will be wiped out
    a->head = second;
    return n;
}

int delete_rear_node(list* a){
    int n=0;
    if(a->head==NULL){
        printf("Empty List");
        return 9999; 
    }
    node* prev = NULL;
    node* cur = a->head;
    while(cur->next!=NULL){
        prev=cur;
        cur=cur->next;
    }
    prev->next=NULL;
    n=cur->data;
    free(cur);
    return n;
}

void order_list(list* a, int d){
    // For linked list, it is sorted while it's being made
    node* temp = malloc(sizeof(node));
    temp->data=d;
    temp->next=NULL;
    if(a->head==NULL){
        a->head=temp;
        return;
    }
    node* cur=a->head;
    node* prev=NULL;
    while(cur!=NULL && d>cur->data){ // to make ascending order
        prev=cur;
        cur=cur->next;
    }
    prev->next=temp;
    temp->next=cur;
}

int count_nodes(list* a){
    int n=0;
    node* cur=a->head;
    if(cur==NULL){
        printf("Empty List");
        return n;
    }
    while(cur!=NULL){
        n++;
        cur=cur->next;
    }
    return n;
}

void insertatpos(list* a, int ele, int pos){
    node* prev=NULL;
    node* cur=a->head;
    node* temp=malloc(sizeof(node));
    temp->data=ele;
    temp->next=NULL;
    if(a->head==NULL){
        a->head=temp;
        return;
    }
    int i = 0; // Assuming that indexing starts at zero
    while(cur!=NULL && i<pos){
        i++;
        prev=cur;
        cur=cur->next;
    }
    if(cur!=NULL){  // To tell that we are not at the end of the list
        if(prev=NULL){ // Literally at the beginning of the list
            a->head=temp;
            temp->next=cur;
        }
        else{ // In between of the list*
            prev->next=temp;
            temp->next=cur;
        }
    }
    else{
        if(i==pos){ // At the literal end of the linked list
            prev->next=temp;
        }
        else
        printf("Invalid Position.\n");
    }
}

int deletenodeatpos(list* a, int pos){
    if(a->head==NULL){
        printf("Empty List");
        return -1;
    }
    else{
        int i=0,x=0;
        node* prev=NULL;
        node* cur=a->head;
        while(cur->next!=NULL && i <pos){
            i++;
            prev=cur;
            cur=cur->next;
        }
        if(cur!=NULL){
            if(prev==NULL){ // beginning of list
                node* sec=cur->next;
                x=cur->data;
                free(cur);
                a->head=sec;
                return x;
            }
            else{ // Any where of the list
                prev->next = cur->next;
                x=cur->data;
                free(cur);
                return x;
            }
        }
        else{
            if(i==pos){
                prev->next=NULL;
                x=cur->data;
                free(cur);
                return x;
            }
            else{
                printf("Invalid\n");
            }
        }
    }
}

int main(){
    list linkedlist;
    initialize_linked_list(&linkedlist);
    while(1){
        int n,data,a;
        printf("1.Insert node to front.\n2.Insert node to rear.\n3.Display.\n4.Delete Front Node.\n5.Delete Rear Node.\n6.Sorting of Linked List(It will sort on the creation of the list)\n7.Counting Nodes.\n8.Insert Nodes at Any Position.\n9.Delete Nodes at Any Position.\n10.Exit\n");
        scanf("%d",&n);
        switch(n){
            case 1:
            printf("Enter data:\n");
            scanf("%d",&data);
            insert_from_front(&linkedlist, data);
            break;
            case 2:
            printf("Enter data:\n");
            scanf("%d",&data);
            insert_from_rear(&linkedlist, data);
            break;    
            case 3:
            display(&linkedlist);
            break;
            case 4:
            a = delete_front_node(&linkedlist);
            if(a!=0)
            printf("The data of the deleted front node is %d.\n", a);
            else
            printf("Empty List\n");
            break;
            case 5:
            a = delete_rear_node(&linkedlist);
            if(a!=9999)
            printf("The data of the deleted rear node is %d.\n" ,a);
            else
            printf("Empty List\n");
            break;
            case 6:
            printf("Enter data:\n");
            scanf("%d",&data);
            order_list(&linkedlist, data);
            break;
            case 7:
            a = count_nodes(&linkedlist);
            if(a!=0)
            printf("The no. of nodes are: %d\n",a);
            break;
            case 8:
            int pos;
            printf("Enter the position where you want to enter at:\n");
            scanf("%d",&pos);
            printf("Enter Data:\n");
            scanf("%d",&data);
            insertatpos(&linkedlist, data, pos);
            break;
            case 10:
            exit(0);
        }
    }
}