#include<stdio.h>

int main(){
    int numsSize = 4;
    int returnSize[numsSize];
    int nums[] = {1,2,3,4};
    for(int i=0;i<numsSize;i++){
        returnSize[i]=1;
        for(int j=0;j<numsSize;j++){
            if(i!=j){
                returnSize[i] = returnSize[i] * nums[j];
            }
        }
    }
    for(int i=0;i<numsSize;i++){
        printf("%d\n",returnSize[i]);
    }
}