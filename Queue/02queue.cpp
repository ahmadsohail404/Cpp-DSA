#include <bits/stdc++.h>
using namespace std;

struct Queue
{
    int data[10];
    int front, rear;
};

void insert(int a)
{
    if (q.rear >= 10)
        cout << "Overflow";
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
        cout << "Empty queue";
    else
    {
        x = q.data[q.front++];
    }
    return;
}

int main()
{
    struct Queue q;
    int ele, y;
    q.front = 0;
    q.rear = -1;

    cin >> ele;
    insert(ele);
    insert(100);
    y = delete ();
    insert(ele);
    y = delete ();

    return 0;
}