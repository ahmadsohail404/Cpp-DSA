// Coded by Sohail :)
#include <stdio.h>

struct queue
{
    int data[10];
    int front, rear;
} Que;

void insert(int a)
{
    if (q.rear >= 10)
        printf("Overflow");
    else
    {
        q.data[++q.rear] = a;
    }
    return;
}

int delete ()
{
    int x;
    if (q.rear < q.front)
        printf("Empty queue");
    else
    {
        x = q.data[q.front++];
    }
    return;
}

int main()
{
    Que q;
    int ele, y;
    q.front = 0;
    q.rear = -1;

    scanf("%d", &ele);
    insert(ele);
    insert(100);
    y = delete ();
    insert(ele);
    y = delete ();

    return 0;
}
