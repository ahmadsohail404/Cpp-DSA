#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next, *prev;
} * head, *second, *third;

struct Node *reverse(struct Node *head)
{
    if (head == NULL || head->next == NULL)
        return head;

    struct Node *prev, *curr = head;

    while (curr != NULL)
    {
        prev = curr->prev;
        curr->prev = curr->next;
        curr->next = prev;
        curr = curr->prev;
    }
    return prev->prev;
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