#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *insertNode(struct Node *head, int count)
{
    struct Node *curr = malloc(sizeof(struct Node));
    curr = NULL;

    while (count > 0)
    {

        int val;
        scanf("%d", &val);
        struct Node *newnode = malloc(sizeof(struct Node));
        newnode->data = val;

        if (head == NULL)
        {
            head = newnode;
            curr = newnode;
        }
        else
        {
            curr->next = newnode;
            curr = newnode;
        }
        count--;
    }
    curr->next = head;
    return head;
}

void printList(struct Node *head)
{
    if (head == NULL)
        return;

    struct Node *p = head;
    do
    {
        printf("Node : %d\n", p->data);
        p = p->next;
    } while (p != head);
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