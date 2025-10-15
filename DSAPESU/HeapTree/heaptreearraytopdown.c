#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define MAX 25

void topdown(int* h, int* size, int value){
    if(*size>=MAX){ // * Array full condition
        return;
    }

    int i=*size;
    int parent;
    h[i]=value;
    (*size)++;
    while(i>0){
        parent=(i-1)/2;
        if(h[parent]<h[i]){
            int temp=h[parent];
            h[parent]=h[i];
            h[i]=temp;
            i=parent;
        }
        else{
            break;
        }
    }
}

void display(int* h, int size){
    if(size==0){ // * No elements
        return;
    }
    for(int i=0;i<size;i++){
        // * print the heap
    }
}

int deleteheap(int* h, int* size){
    if(*size==0){ // * Empty array
        return;
    }
    int max=h[0];
    h[0]=h[*size-1];
    (*size)--;
    heaping(h, *size -1);
    return max;
}

void heaping(int* h, int n){ // .* Code of BottomUp Approach
    int k, i, j, key;
    // * Starting From Last parent
    for(k=(n-1)/2;k>=0;k--) 
    {
        j=k;
        key=h[j];
        i=2*j+1; // * Specifing that left child 
        while(i<=n){
            if((i+1)<=n){
                if (h[i+1]>h[i])
                {
                    i++;
                }
            }
            if(key<h[i]){
                h[j]=h[i];
                j=i;
                i=2*j+1;
            }
            else{
                break;
            }
        }
        h[j]=key;
    } 
}

int main(){
    int heap[MAX];
    int size=0;
    int ch, value;

    // Choices code are here

    // Switch statement code is here

    // * Elements are input one at a time

    topdown(heap, &size, value);
}