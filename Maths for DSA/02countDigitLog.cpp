#include <bits/stdc++.h>
using namespace std;

int count_digit(int n)
{
    return floor(log10(n) + 1);
}

int main()
{
    int n;
    cin >> n;
    cout << count_digit(n);

    return 0;
}