#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
} * head, *second, *third;

// Method 2(better):-
void printList(struct Node *head)
{
    if (head == NULL)
        return;

    struct Node *p = head;

    do
    {
        printf("%d ", p->data);
        p = p->next;

    } while (p != head);
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