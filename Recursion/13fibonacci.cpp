#include <bits/stdc++.h>
using namespace std;

// 0 1 1 2 3 5 8 13 . . .

// TRUST
// It'll return nth fibonacci number.

// f(8) = f(7) + f(6)
// f(n) = f(n-1) + f(n-2)
int fib(int n)
{
    if (n == 1)
        return 0;
    if (n == 2)
        return 1;
    return (fib(n - 1) + fib(n - 2));
}

int main()
{
    int n;
    cin >> n;
    cout << fib(n);
}