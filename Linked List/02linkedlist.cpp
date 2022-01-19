// Creating a linked list of three nodes.

// #include <bits/stdc++.h>
// using namespace std;

// struct Node
// {
//     int data;
//     Node *next;
//     Node(int x)
//     {
//         data = x;
//         next = NULL;
//     }
// };

// int main()
// {
//     Node *head = new Node(10);
//     Node *temp1 = new Node(20);
//     Node *temp2 = new Node(30);

//     head->next = temp1;
//     temp1->next = temp2;

//     return 0;
// }

// Short implementation.

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

void printList(Node *head)
{
    while (head != NULL)
    {
        cout << (head->data) << " ";
        head = head->next;
    }
}

int main()
{
    Node *head = new Node(10);
    printList(head);
    printList(head);

    return 0;
}