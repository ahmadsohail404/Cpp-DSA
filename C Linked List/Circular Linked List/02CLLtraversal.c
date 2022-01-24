#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
} * head, *second, *third;

// Method 1:-
void printList(struct Node *head)
{
    if (head == NULL)
        return;
    printf("%d ", head->data);

    for (struct Node *p = head->next; p != head; p = p->next)
        printf("%d ", p->data);
}

int main()
{
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    head->data = 10;
    head->next = second;

    second->data = 5;
    second->next = third;

    third->data = 20;
    third->next = head;

    printList(head);

    return 0;
}