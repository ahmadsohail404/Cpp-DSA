#include <stdio.h>
#include <string.h>
#define MAX 10

int stack[MAX];
int top = -1;

void push(char ele)
{
    stack[++top] = ele;
}

char pop()
{
    return stack[top--];
}

int main()
{
    int i, length;
    char str[100];
    printf("Enter the string to check for palindrome: ");
    scanf("%s", str);
    i = 0;
    length = strlen(str);
    while (i < length)
    {
        push(str[i++]);
    }
    i = 0;
    while (i < length)
    {
        if (str[i] != pop())
            break;
        else
            i++;
    }
    if (i == length)
        printf("Palindrome\n");
    else
        printf("Not Palindrome");
}