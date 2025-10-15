#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define MAX 25

// * Bottom Up Approach

void bottomup(int* h, int n){
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

int deleteheap(int* h, int n){
    int max;
    max=h[0];
    h[0]=h[n-1];
    bottomup(h,n-1);
    return(max);

}

int main(){
    int h[MAX], n ,x; 
    // * n is length of input array
    bottomup(h,n-1);
    deleteheap(h, n--);
}