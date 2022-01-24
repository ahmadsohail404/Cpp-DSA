#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
} * head, *second, *third, *fourth;

int main()
{
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 10;
    head->next = second;

    second->data = 5;
    second->next = third;

    third->data = 20;
    third->next = fourth;

    fourth->data = 15;
    fourth->next = head;

    return 0;
}