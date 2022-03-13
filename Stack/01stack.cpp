// push
// pop
// size
// peek
// isEmpty

#include <bits/stdc++.h>
using namespace std;

struct myStack
{
    int *arr;
    int cap;
    int top;

    myStack(int c)
    {
        cap = c;
        arr = new int[cap];
        top = -1;
    }

    void push(int x)
    {
        if (top == cap - 1)
        {
            cout << "Stack overflow" << endl;
            return;
        }
        arr[++top] = x;
    }
    int pop()
    {
        if (top == -1)
        {
            cout << "Stack underflow" << endl;
            return INT_MAX;
        }

        return arr[top--];
    }
    int size()
    {
        return top + 1;
    }
    int peek()
    {
        if (top == -1)
        {
            cout << "Empty Stack" << endl;
            return INT_MAX;
        }
        return arr[top];
    }
    bool isEmpty()
    {
        return (top == -1);
    }
};

int main()
{
    myStack s(5);

    // s.push(10);
    // s.push(20);
    // s.push(30);

    cout << s.pop() << endl;
    cout << s.size() << endl;
    cout << s.peek() << endl;
    cout << s.isEmpty() << endl;

    return 0;
}