#include <bits/stdc++.h>
using namespace std;

int sum_n(int n)
{
    if (n == 0)
        return 0;
    else
    {
        return (n + sum_n(n - 1));
    }
}

int main()
{
    int n;
    cin >> n;
    cout << sum_n(n);
}