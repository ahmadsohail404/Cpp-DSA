//Code by Sohail :)
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the binary number: ";
    cin >> n;

    int val = 0;
    int base = 1;

    while (n > 0)
    {
        int last_digit = n % 10;
        val += (last_digit * base);
        n /= 10;
        base *= 2;
    }
    cout << val;

    return 0;
}