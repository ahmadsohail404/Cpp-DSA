#include <bits/stdc++.h>
using namespace std;

void print_pattern(int n)
{
    if (n == 0)
        return;

    print_pattern(n - 1); // because of TRUST
    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }
    cout << "\n";
}

int main()
{
    int n;
    cin >> n;

    print_pattern(n);
}