#include <stdio.h>
#include <ctype.h>
#define size 20

struct st
{
    int s[size];
    int top;
} stack;

void push(int ele)
{
    stack.s[++stack.top] = ele;
}

int pop()
{
    return (stack.s[stack.top--]);
}

int main()
{
    char exp[20];
    int n = 0, op1, op2, ele, res;

    printf("Enter the expression: ");
    scanf("%s", exp);

    while (exp[n] != '\0')
    {
        if (isdigit(exp[n]))
        {
            ele = exp[n] - 48;
            push(ele);
            n++;
        }
        else
        {
            op1 = pop();
            op2 = pop();

            switch (exp[n])
            {
            case '+':
                res = op1 + op2;
                break;
            case '-':
                res = op1 - op2;
                break;
                // and so on.
            }
            push(res);
        }
        n++;
    }

    return 0;
}