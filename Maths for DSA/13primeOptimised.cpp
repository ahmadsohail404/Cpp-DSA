#include <bits/stdc++.h>
using namespace std;

// Time Complexity = O(sqrt(n)).
// Idea: Divisors always occur in pair.
// e.g -> 30 : (1,30), (2,15), (3,10), (5,6).

bool is_prime(int n)
{
    if (n == 1)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    cout << is_prime(n);

    return 0;
}