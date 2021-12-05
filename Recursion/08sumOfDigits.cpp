#include <bits/stdc++.h>
using namespace std;

// e.g 12143 -> 1 + 2 + 1 + 4 + 3 === sum_digit(1214) + 3

int sum_digits(int n)
{
    if (n == 0)
        return 0;
    else
    {
        int last_digit = n % 10;
        int remaining = n / 10;
        cout << remaining << " " << last_digit << "\n";
        return (sum_digits(remaining) + last_digit);
    }
}

int main()
{
    int n;
    cin >> n;
    cout << sum_digits(n);
}