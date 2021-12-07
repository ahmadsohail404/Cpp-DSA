#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    int res = min(a, b);
    int gcd = res;
    for (int i = 2; i <= res; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            if (i > gcd)
                gcd = i;
        }
    }
    return gcd;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b);
}