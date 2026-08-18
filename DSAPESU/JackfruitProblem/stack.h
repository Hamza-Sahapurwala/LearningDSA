#ifndef STACK_H
#define STACK_H

#define MAX 100

typedef struct {
    int arr[MAX];
    int top;
} STACK;

void initStack(STACK *s);
int isEmpty(STACK *s);
int pop(STACK *s);
void push(STACK *s, int operand);
void display(STACK *s);
void performOperation(STACK *s, char op);

#endif