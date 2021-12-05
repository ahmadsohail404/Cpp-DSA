#include <bits/stdc++.h>
using namespace std;

// TRUST -> Mathematical Induction
void print_pattern(int n)
{
    if (n == 1)
    {
        cout << 1 << "\n";
        return;
    }

    for (int i = 1; i <= n; i++)
        cout << i << " ";
    cout << "\n";

    print_pattern(n - 1);

    for (int i = 1; i <= n; i++)
        cout << i << " ";
    cout << "\n";
}

int main()
{
    int n;
    cin >> n;
    print_pattern(n);
}