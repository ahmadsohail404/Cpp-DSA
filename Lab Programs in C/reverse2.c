#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *prev, *next;
};
typedef struct node *NODE;

void push(NODE *head_ref, int x)
{
    NODE temp = (NODE)malloc(sizeof(struct node));
    temp->data = x;
    temp->next = (*head_ref);
    if ((*head_ref) != NULL)
        (*head_ref)->prev = temp;
    (*head_ref) = temp;
}

NODE reverse(NODE head)
{
    if (head == NULL || head->next == NULL)
        return head;
    NODE prev, curr;

    while (curr != NULL)
    {
        prev = curr->prev;
        curr->prev = curr->next;
        curr->next = prev;
        curr = curr->prev;
    }
    return prev->prev;
}

void print(NODE head)
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
    NODE head = NULL;
    push(&head, 10);
    push(&head, 20);
    push(&head, 30);
    push(&head, 40);
    push(&head, 50);

    print(head);

    return 0;
}