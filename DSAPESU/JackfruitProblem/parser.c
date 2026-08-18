#include "parser.h"
#include "stack.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void parseExpression(STACK *s, const char *exp)
{
    int i = 0;
    while (exp[i] != '\0')
    {
        if (isspace((unsigned char)exp[i]))
        {
            i++;
            continue;
        }
        if (isdigit((unsigned char)exp[i]) || (exp[i] == '-' && isdigit((unsigned char)exp[i + 1])))
        {
            int sign = 1;
            if (exp[i] == '-')
            {
                sign = -1;
                i++;
            }
            int num = 0;
            while (isdigit((unsigned char)exp[i]))
            {
                num = num * 10 + (exp[i] - '0');
                i++;
            }
            push(s, sign * num);
            continue;
        }
        char op = exp[i];
        switch (op)
        {
        case '+':
        case '-':
        case '*':
        case '/':
        case '%':
            performOperation(s, op);
            break;
        case '?':
            display(s);
            break;
        case '^':
            if (!isEmpty(s))
                printf("Result popped: %d\n", pop(s));
            else
                printf("STACK is empty!\n");
            break;
        case '!':
            printf("Program terminated.\n");
            exit(0);
        case 'R':
            if (!isEmpty(s)){
                float num = pow(pop(s),0.5);
                printf("Result popped (SQUARE ROOT OF TOP): %.2f\n", num);
                push(s,(int)num);
            }
            else
                printf("STACK is empty!\n");
            break;
        case 'D':
            if (!isEmpty(s))
            {
                int num = pop(s);
                push(s,num);
                push(s, num);
            }
            else
                printf("STACK is empty!\n");
            break;
        default:
            printf("Invalid Character: %c\n", op);
            break;
        }
        i++;
    }
}