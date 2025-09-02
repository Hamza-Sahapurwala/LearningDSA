#include<stdio.h>
#include<stdlib.h>

void enqueue(int* q, int* r, int ele){
    if(*r == 4){ // * For an array of 5 elements 
        printf("Overflow\n");
    }
    else{
        int j = *r;
        while(j>=0 && ele<q[j]){ // * Keeps the queue in ascending order
            q[j+1] = q[j]; // * Shifting all the greater elements to the right to make space for the new element
            j--;
        }
        q[j+1]=ele;
        *r++;
    }
}

void display(int* q, int r, int f){
    if(f>r){
        printf("Underflow");
        return;
    }
    else{
        for(int i=f; i<=r;i++){
            printf("%d",q[i]);
        }
    }
}

int dequeue(int *q, int* f, int r){
    if(*f > r){
        printf("Underflwo");
        return;
    }
    else{
        int x = q[*f];
        *f++;
        return x;
    }
}

int main(){
    int f=-1, r=-1;
    int q[5];
}