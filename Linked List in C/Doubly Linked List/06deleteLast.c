#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next, *prev;
} * head, *second, *tail;

struct Node *deleteTail(struct Node *head)
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
        struct Node *curr = head;
        while (curr->next != NULL)
            curr = curr->next;

        curr->prev->next = NULL;
        free(curr);
        return head;
    }
}

int main()
{
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    tail = (struct Node *)malloc(sizeof(struct Node));

    head->data = 10;
    head->next = second;
    head->prev = NULL;

    second->data = 20;
    second->next = tail;
    second->prev = head;

    tail->data = 30;
    tail->prev = second;
    tail->next = NULL;

    return 0;
}