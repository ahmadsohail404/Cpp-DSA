#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
} * head, *second, *third;

struct Node *insertBegin(struct Node *head, int x)
{
    struct Node *temp = malloc(sizeof(struct Node));
    temp->data = x;
    if (head == NULL)
        temp->next = temp;
    else
    {
        struct Node *curr = head;
        while (curr->next != head)
            curr = curr->next;
        curr->next = temp;
        temp->next = head;
    }
    return temp;
}

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

    printf("Before insertion: ");
    printList(head);
    printf("\n");
    printf("After insertion : ");

    head = insertBegin(head, 7);
    printList(head);

    return 0;
}