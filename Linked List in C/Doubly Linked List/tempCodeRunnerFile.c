void displayList(struct Node *head)
{
    struct Node *curr = head;
    while (curr != head)
    {
        printf("%d ", curr->data);
        curr = curr->next;
    }
}