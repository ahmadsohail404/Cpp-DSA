#include <bits/stdc++.h>
using namespace std;

// T(n) = T(n-1) + Theta(1).

int fact(int n)
{
    if (n == 0)
        return 1;
    return (n * fact(n - 1));
}

int main()
{
    int n;
    cin >> n;
    cout << fact(n);
}