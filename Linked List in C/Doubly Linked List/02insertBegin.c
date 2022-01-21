#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
} * head, *second, *third;

struct Node *insertBeg(struct Node *head)
{
    struct Node *new_node = malloc(sizeof(struct Node));
    new_node->data = 5;

    new_node->next = head;
    if (head != NULL)
    {
        head->prev = new_node;
    }
    return new_node;
}

int main()
{
    head = NULL;
    second = NULL;
    third = NULL;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    head->data = 10;
    head->prev = NULL;
    head->next = second;

    second->data = 20;
    second->prev = head;
    second->next = third;

    third->data = 30;
    third->prev = second;
    third->next = NULL;

    return 0;
}