#include <bits/stdc++.h>
using namespace std;

int count_zero(int n)
{
    unsigned long long fact = 1;
    for (int i = 2; i <= n; i++)
        fact *= i;

    int res = 0;
    while (fact % 10 == 0)
    {
        res++;
        fact /= 10;
    }
    return res;
}

int main()
{
    int n;
    cin >> n;
    cout << count_zero(n);
}

// overflows for longer factorial.