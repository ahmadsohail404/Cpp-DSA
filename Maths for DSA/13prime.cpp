#include <bits/stdc++.h>
using namespace std;

// Time Complexity = O(n)
// it may return O(1) also in case of even input

bool is_prime(int n)
{
    if (n == 1)
        return false;

    for (int i = 2; i < n; i++)
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
}