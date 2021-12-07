#include <bits/stdc++.h>
using namespace std;

// a*b = gcd(a,b) * lcm(a,b)

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b); // Time comp. = O(log(min(a,b)))
}

int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << lcm(a, b);
}
