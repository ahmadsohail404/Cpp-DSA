#include <bits/stdc++.h>
using namespace std;

void inverted_pattern(int n)
{
    if (n == 0)
        return;

    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }
    cout << "\n";
    inverted_pattern(n - 1);
}

int main()
{
    int n;
    cin >> n;
    inverted_pattern(n);
}