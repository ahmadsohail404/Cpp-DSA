#include <bits/stdc++.h>
using namespace std;

// better complexity than recursive one.

int fact(int n)
{
    int fact = 1;
    for (int i = 2; i <= n; i++)
        fact *= i;
    return fact;
}

int main()
{
    int n;
    cin >> n;
    cout << fact(n);
}