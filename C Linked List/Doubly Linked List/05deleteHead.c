#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next, *prev;
} * head, *second, *third;

struct Node *deleteDLL(struct Node *head)
{
    if (head == NULL)
        return NULL;
    if (head->next == NULL)
    {
        free(head);
        return NULL;
    }
    else
    {
        struct Node *temp = head;
        head = head->next;
        head->prev = NULL;
        free(temp);
        return head;
    }
}

int main()
{
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    head->data = 10;
    head->next = second;
    head->prev = NULL;

    second->data = 20;
    second->next = third;
    second->prev = head;

    third->data = 30;
    third->prev = second;
    third->next = NULL;

    return 0;
}