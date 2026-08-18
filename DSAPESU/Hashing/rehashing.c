#include<stdio.h>
#include<stdlib.h>
#define MAX 10
typedef struct node
{
    int data;
    int flag;
}NODE;
typedef struct
{
    int size;
    struct node *hashtable;
}HASH;
int count=0;
HASH *createHash(int size)
{
    HASH *hash=malloc(sizeof(HASH));
    hash->size=size;
    hash->hashtable=malloc(sizeof(NODE));
    for(int i=0;i<MAX;i++)
        hash->hashtable[i].flag=0;
    return hash;
}
void rehash(int key,HASH **h)
{
    int newsize=(*h)->size*2;
    HASH *newHash=createHash(newsize);
    int hash,j=0;
    for(int i=0;i<(*h)->size;i++)
    {
        if((*h)->hashtable[i].flag==1)
        {
            hash=((*h)->hashtable[i].data+j)%newsize;
            while(newHash->hashtable[hash].flag!=0)
            {
                j++;
                hash=((*h)->hashtable[i].data%newsize+j)%newsize;
            }
            newhash->hashtable[hash].data=(*h)->hashtable[i].data;
            newhash->hashtable[hash].flag=1;

        }
    }
    destroyhash(*h);
    *h=newhash;
}
void insert(int key,HASH *h)
{
    int hash,i=0;
    count++;
    if(count>(float)0.75*h->size)
        rehash(key,&h);
}
int main()
{
    HASH *hashtable=createHash(MAX);
    int key,ch;
    while(1)
    {
        printf("1.insert\n 2.search\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: printf("Enter the key\n");
                    scanf("%d",&key);
                    insert(key,hashtable);
                    break;
        }
    }
}
