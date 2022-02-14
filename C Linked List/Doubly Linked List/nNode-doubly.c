#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next, *prev;
};

struct Node *insertNode(struct Node *head, int count)
{
    struct Node *curr = head;
    struct Node *newnode = malloc(sizeof(struct Node));
}

void printList(struct Node *head)
{
    struct Node *p = head;
    while (p != NULL)
    {
        printf("Node: %d\n", p->data);
        p = p->next;
    }
}

int main()
{

    int n;
    scanf("%d", &n);
    struct Node *head = malloc(sizeof(struct Node));
    head = NULL;

    head = insertNode(head, n);
    printList(head);

    return 0;
}