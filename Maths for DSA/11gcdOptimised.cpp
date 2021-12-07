// using Basic Euclid's Algorithm.
#include <bits/stdc++.h>
using namespace std;

/*
Euclid's Algorithm:-

Let b be smaller than a
gcd(a,b) = gcd(a-b, b)

Why?
Let g be GCD of a and b.
a = gx, b = gy and gcd(x,y) = 1.
a-b = gx - gy = g(x-y).

*/
int gcd(int a, int b)
{
    while (a != b)
    {
        if (a > b)
            a -= b;
        else
            b -= a;
    }
    return a; // or return b is also fine.
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b);
}