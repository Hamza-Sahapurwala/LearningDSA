#include<stdio.h>
#include<stdlib.h>
#define MAX 10
typedef struct item
{
    int key;
    int value;
}item;
typedef struct hash
{

    int flag;
    struct item *data;
} hash_table;

hash_table *array;
void init()
{

    for(int i=0;i<MAX;i++)
    {
        array[i].flag=0;
        array[i].data=NULL;
    }
}
int hash_fun(int key)
{
    return(key%MAX);
}
void insert(int key,int value)
{
    int index,i;
    item *ele=malloc(sizeof(item));
    ele->key=key;
    ele->value=value;
    i=hash_fun(key);
    index=i;
    int h=1;
    while(array[i].flag==1)
    {
        if(array[i].data->key==key)
        {
            printf("duplicate srn update the value\n");
            array[i].data->value=value;
        }
        i=(i+(h*h))%MAX;
        h++;
        if(i==index)
        {
            printf("hash table is full\n");
            return;
        }
    }
    array[i].flag=1;
    array[i].data=ele;
    printf("%d key is inserted in %d index\n",key,i);
}
void search(int key)
{

    int i,index;
    i=hash_fun(key);
    index=i;
    int h=1;
    while(array[i].flag!=0)
    {
        if(array[i].flag==1 && array[i].data->key==key)
        {

            printf("key is found\n");
            return;
        }
        i=(i+(h*h))%MAX;
        h++;
        if(i==index)
            break;
    }
    printf("Element not found\n");
}
void remove_key(int key)
{
    int index=hash_fun(key);
    int i=index;
    int h=1;
    while(array[i].flag!=0)
    {
        if(array[i].data->key==key)
        {
            array[i].flag=2;
            array[i].data=NULL;
            return;
        }
        i=(i+(h*h))%MAX;
        h++;
        if(i==index)
            break;
    }
    printf("Not found\n");

}
void display()
{
    for(int i=0;i<MAX;i++)
    {

        if(array[i].data==NULL)
            printf("NO data");
        else
            printf("Key(%d) and value(%d)\n",array[i].data->key,array[i].data->value);
    }
}

int main()
{
    int key,value,choice;
    array=malloc(sizeof(hash_table));
    init();
    while(1)
    {
        printf("1.insert\n 2.search\n 3.delete a key\n 4.display\n");
        printf("Enter the choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:printf("Enter the key and value\n");
                    scanf("%d%d",&key,&value);
                    insert(key,value);
                    break;
            case 2: printf("Enter the key\n");
                    scanf("%d",&key);
                    search(key);
                    break;
            case 3: printf("Enter the key to be deleted\n");
                    scanf("%d",&key);
                    remove_key(key);
                    break;
            case 4: display();

        }
    }

}
