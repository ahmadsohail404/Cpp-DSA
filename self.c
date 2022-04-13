#include <stdio.h>
#define n 10

struct st
{
    int s[n];
    int top;
} stack;

void push(int ele)
{
    if (stack.top >= n)
    {
        printf("Stack overflow");
        return;
    }
    else
    {
        stack.top++;
        stack.s[stack.top] = ele;
    }
    return;
}

int pop()
{
    int k;
    if (stack.top == -1)
    {
        printf("Stack underflow");
    }
    else
    {
        k = stack.s[stack.top]; // arr[top];
        stack.top--;            // top--;
    }
    return k;
}

void list()
{
    if (stack.top == -1)
    {
        printf("List is empty");
        return;
    }
    else
    {
        for (int i = stack.top; i >= 0; i--)
        {
            printf("%d ", stack.s[i]);
        }
    }
}

int main()
{
    int ele, pele, op;
    stack.top = -1;
    scanf("%d", &op);

    switch (op)
    {
    case 1:
        scanf("%d", &ele);
        push(ele);
        list();
        break;

    case 2:
        pele = pop();
        list();
        break;

    case 3:
        list();
        break;

    case 4:
        return 0;
    }

    return 0;
}