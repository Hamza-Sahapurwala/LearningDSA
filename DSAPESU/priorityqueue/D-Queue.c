#include<stdio.h>
#include<stdlib.h>

// * Insert at front means from the end of the array
void insertatfront(int *q, int *r, int *f, int ele){
    if((*f==0 && *r==4) || (*f==*r+1)){ // * For an 5 element array 
        printf("Overflow");
    }
    else{
        if(*f == -1 && *r==-1){ // * If you are inserting the first element, this code will run
            *f=*r=0;
        }
        else if(*f==0){ // * If only 1 element has been inserted
            *f = 4; // * Insert at the last index of the array
        }
        else{
            (*f)--;
        }
        q[*f] = ele;
    }
}

// * Insert at Rear means insert at start of the array 
void insertAtRear(int *q, int* r, int* f, int ele){
    if((*f==0 && *r==4) || (*f==*r+1)){ // * For an 5 element array 
        printf("Overflow");
    }
    else{
        if(*f==*r==-1){ // * Inserting the first element in the array
            *f=*r=0;
        }
        else if(*r==4){
            *r=0;
        }
        else{
            (*r)++;
        }
        q[*r]=ele;
    }
}

void display(int* q, int f, int r){
    if(f==-1){
        printf("Underflow");
    }
    else{
        int i=f;
        while(i!=r){
            printf("%d",q[i]);
            i=(i+1)%5;
        }
        printf("%d",q[r]);
    }
}

int deleteAtFront(int* q, int* r, int* f){
    int x;
    if(*f==-1){
        printf("Underflow");
    }
    else{
        if(*f==*r){
            x = q[*f];
            *f=*r=-1;
        }
        else if(*f==4){ // * front wraps around to the other end of the array
            x=q[*f];
            *f=0;
        }
        else{
            x=q[*f];
            (*f)++;
        }
        return x;
    }
}

int deleteAtRear(int* q, int* r, int* f){
    int x;
    if(*f==-1){
        printf("Underflow");
    }
    else{
        if(*f==*r){ // * If it's only 1 element
            x = q[*r];
            *f=*r=-1;
        }
        else if(*r==0){ // * rear wraps around to the other end of the array
            x=q[*r];
            *r=4;
        }
        else{
            x=q[*r];
            (*r)--;
        }
        return x;
    }
}

int main(){
    int rear=-1, front=-1;
    int q[5];
}