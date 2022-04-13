#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
} * head, *second, *third;

// inserting next to head and swapping data making it O(1).
struct Node *insertBegin(struct Node *head, int x)
{
    struct Node *temp = malloc(sizeof(struct Node));
    temp->data = x;
    if (head == NULL)
    {
        temp->next = temp;
        return temp;
    }
    else
    {
        temp->next = head->next;
        head->next = temp;
        head->data = temp->data;
        temp->data = head->data;
        return head;
    }
}

void printList(struct Node *head)
{
    struct Node *p = head;
    if (head == NULL)
        return;

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
    head = insertBegin(head, 108);
    printList(head);

    return 0;
}