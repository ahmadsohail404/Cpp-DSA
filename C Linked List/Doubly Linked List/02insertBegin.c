#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
} * head, *second, *third;

void printList(struct Node *head)
{
    struct Node *curr = head;
    while (curr != NULL)
    {
        printf("%d ", curr->data);
        curr = curr->next;
    }
}

struct Node *insertBeg(struct Node *head, int x)
{
    struct Node *new_node = malloc(sizeof(struct Node));
    if (head != NULL)
    {
        head->prev = new_node;
    }

    new_node->data = x;
    new_node->next = head;

    return new_node;
}

int main()
{

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

    printf("Before insertion: ");
    printList(head);
    printf("\n");
    printf("After insertion : ");
    head = insertBeg(head, 40);
    printList(head);

    return 0;
}