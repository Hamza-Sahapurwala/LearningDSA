#include "stack.h"
#include <stdio.h>
#include <math.h>

void initStack(STACK *s) {
    s->top = -1;
}

int isEmpty(STACK *s)
{
    return s->top == -1;
}

void push(STACK *s, int operand)
{
    if (s->top >= MAX - 1)
    {
        printf("ERROR : STACK OVERFLOW\n");
        return;
    }
    s->arr[++s->top] = operand;
}

int pop(STACK *s)
{
    if (isEmpty(s))
    {
        printf("ERROR : STACK UNDERFLOW\n");
        return 0;
    }
    return s->arr[s->top--];
}

void display(STACK *s)
{
    if (isEmpty(s))
    {
        printf("STACK is Empty!\n");
        return;
    }
    printf("STACK: ");
    for (int i = 0; i <= s->top; i++)
        printf("%d ", s->arr[i]);
    printf("\n");
}

void performOperation(STACK *s, char op)
{
    if (s->top < 1)
    {
        printf("ERROR : NOT ENOUGH OPERANDS\n");
        return;
    }
    int num2 = pop(s);
    int num1 = pop(s);
    int result = 0;

    switch (op)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        if (num2 == 0)
        {
            printf("ERROR : DIVISION BY ZERO\n");
            push(s, num1);
            push(s, num2);
            return;
        }
        result = num1 / num2;
        break;
    case '%':
        if (num2 == 0)
        {
            printf("ERROR : MODULO BY ZERO\n");
            push(s, num1);
            push(s, num2);
            return;
        }
        result = num1 % num2;
        break;
    default:
        printf("Invalid Operator: %c\n", op);
        push(s, num1);
        push(s, num2);
        return;
    }
    push(s, result);
}