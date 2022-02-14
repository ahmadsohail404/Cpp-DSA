#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next, *prev;
};

void push(struct node **head_ref, int x)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = x;
    temp->next = (*head_ref);
    if ((*head_ref) != NULL)
        (*head_ref)->prev = temp;
    (*head_ref) = temp;
}

int largest(struct node **head_ref)
{
    struct node *max, *temp;
    max = temp = (*head_ref);

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
    struct node *head = NULL;

    push(&head, 10);
    push(&head, 200);
    push(&head, 30);
    push(&head, 40);
    push(&head, 50);

    printf("Largest number is: %d\n", largest(&head));

    return 0;
}