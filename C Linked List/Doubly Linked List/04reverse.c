#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next, *prev;
} * head, *second, *third;
typedef struct Node *NODE;

NODE reverse(NODE head)
{
    if (head == NULL || head->next == NULL)
        return head;

    NODE prev = head;
    NODE curr = head;

    while (curr != NULL)
    {
        prev = curr->prev;
        curr->prev = curr->next;
        curr->next = prev;
        curr = curr->prev;
    }
    return prev->prev;
}

void printList(NODE head)
{
    NODE p = head;
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}

int main()
{
    head = (NODE)malloc(sizeof(struct Node));
    second = (NODE)malloc(sizeof(struct Node));
    third = (NODE)malloc(sizeof(struct Node));

    head->data = 10;
    head->next = second;
    head->prev = NULL;

    second->data = 20;
    second->next = third;
    second->prev = head;

    third->data = 30;
    third->prev = second;
    third->next = NULL;

    head = reverse(head);
    printList(head);

    return 0;
}