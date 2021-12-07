// Optimized Euclidian Algorithm.
// using modular devision instead of repeated subtraction.
#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b); // if x<y then (x % y) = x.
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b);
}