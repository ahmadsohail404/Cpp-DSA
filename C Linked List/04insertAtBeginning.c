#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node insertBegin(struct Node *head, int x)
{
    struct Node *temp;
    temp = (struct Node *)malloc(sizeof(struct Node));

    temp->next = head;
    return *temp;
}

int main()
{
    struct Node *head = NULL;

    head = (struct Node *)malloc(sizeof(struct Node));

    *head = insertBegin(head, 30);
    *head = insertBegin(head, 20);
    *head = insertBegin(head, 10);

    return 0;
}