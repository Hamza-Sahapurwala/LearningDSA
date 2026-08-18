#include <stdio.h>
#include <string.h>
#include "stack.h"
#include "parser.h"

int main()
{
    char exp[MAX];
    STACK s;

    initStack(&s);

    printf("Reverse Polish Notation (RPN) Calculator\n");
    printf("Operators : + - * / %%\nCommands : ? (DISPLAY) \t ^ (POP RESULT) \t ! (EXIT)\t R (SQAURE ROOT TOP) \t D (DUPLICATE TOP)\n");

    while (1)
    {
        printf("Enter expression: ");
        fgets(exp, sizeof(exp), stdin);
        exp[strcspn(exp, "\n")] = '\0';

        parseExpression(&s, exp);

        if (!isEmpty(&s))
            printf("Final result (TOP OF STACK): %d\n", s.arr[s.top]);
        else
            printf("Stack is empty, no top left.\n");
    }

    return 0;
}