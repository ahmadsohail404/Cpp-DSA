#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    struct Node *head = NULL;
    struct Node *temp1 = NULL;
    struct Node *temp2 = NULL;

    head = (struct Node *)malloc(sizeof(struct Node));
    temp1 = (struct Node *)malloc(sizeof(struct Node));
    temp2 = (struct Node *)malloc(sizeof(struct Node));

    head->data = 10;
    head->next = temp1;

    temp1->data = 20;
    temp1->next = temp2;

    temp2->data = 30;
    temp2->next = NULL;

    return 0;
}