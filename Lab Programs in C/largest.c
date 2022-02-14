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
    temp->next = *head_ref;
    if ((*head_ref) != NULL)
        (*head_ref)->prev = temp;
    (*head_ref) = temp;
}

int largest(NODE *head_ref)
{
    NODE temp;
    NODE max;
    temp = max = (*head_ref);

    while (temp != NULL)
    {
        if (temp->data > max->data)
            max = temp;
        temp = temp->next;
    }
    return max->data;
}

int main()
{
    NODE head = NULL;
    push(&head, 10);
    push(&head, 20);
    push(&head, 30);
    push(&head, 40);
    push(&head, 50);
    push(&head, 60);

    printf("Largest number is: %d\n", largest(&head));

    return 0;
}