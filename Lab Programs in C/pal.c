#include <stdio.h>
#include <string.h>
#define MAX 10

int stack[MAX];
int top = -1;

void push(char x)
{
    top++;
    stack[top] = x;
}

char pop()
{
    char name;
    name = stack[top];
    top--;
    return name;
}

int main()
{
    int i, lenght;
    char str[10];
    printf("enter the string\n");
    scanf("%s", str);
    lenght = strlen(str);
    i = 0;
    while (i < lenght)
    {
        push(str[i]);
        i++;
    }
    i = 0;

    while (i < lenght)
    {
        if (str[i] != pop())
        {
            break;
        }
        else
        {
            i++;
        }
    }
    if (i == lenght)
    {
        printf("string is palindrome\n");
    }
    else
    {
        printf("string is not palindrome\n");
    }
    return 0;
}