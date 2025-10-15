#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define MAX 100

typedef struct stack{
    char expression[MAX];
    int top;
}stack;

int isEmpty(stack* stac){
    if(stac->top==-1){
        return 1;
    }
    return 0;
}

void displayStack(stack* stac){
    if(isEmpty(stac)==0){
        for(int i=0;i<stac->top;i++){
            printf("%d\n", stac->expression[i]);
        }
    }
    else{
        printf("Empty Stack\n");
    }
}

int performOperation(stack* stac ,char operator){ // ! Assuming that top of stack has the operator!!!
    switch(operator){
        case '+':
        return stac->expression[--stac->top] + stac->expression[stac->top]; 
        case '-':
        return stac->expression[--stac->top] - stac->expression[stac->top];
        case '*':
        return stac->expression[--stac->top] * stac->expression[stac->top];
        case '/':
        return stac->expression[--stac->top] / stac->expression[stac->top];
        case '%':
        return stac->expression[--stac->top] % stac->expression[stac->top];
    }
}