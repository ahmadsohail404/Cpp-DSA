#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *insertNode(struct Node *head, int count)
{
    struct Node *curr = (struct Node *)malloc(sizeof(struct Node));
    curr = NULL;

    while (count > 0)
    {
        int val;
        scanf("%d", &val);

        struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));
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
    struct Node *p = head;

    while (p->next != head)
    {
        printf("Data : %d\n", p->data);
        p = p->next;
    }
    printf("Last Data : %d\n", p->data);
}

int main()
{
    int n;
    scanf("%d", &n);

    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    // struct Node *curr = (struct Node *)malloc(sizeof(struct Node));

    head = NULL;
    // curr = NULL;

    head = insertNode(head, n);

    // curr->next = head;
    printList(head);

    return 0;
}