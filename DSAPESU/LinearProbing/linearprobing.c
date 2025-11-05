#include<stdio.h>
#include<stdlib.h>
#define MAX 5

typedef struct item{
    int k;
    int v;
}item;

typedef struct hash{
    int flag;
    struct item* data;
}hash;

hash* array;

void init(){
    for(int i=0;i<MAX;i++){
        array[i].flag=0;
        array[i].data=NULL;
    }
}

int hash_fun(int k){
    return k%MAX;
}

void insert(int kk, int vv){
    int index,i;
    item* e=malloc(sizeof(item));
    e->k=kk;
    e->v=vv;
    i=hash_fun(kk);
    index=i;
    while(array[i].flag==1){
        if(array[i].data->k==kk){
            printf("Duplicate Key Update Value Not Allowed\n");
            array[i].data->v=vv;
        }
        i=(i+1)%MAX;
        if(i==index){
            printf("Hash Full\n");
            return;
        }
        array[i].flag=1;
        array[i].data=e;
    }
}

int main(){
    int key, value, choice;
    array=malloc(sizeof(hash));
    init();
    insert(key,value);
}