//Code by Sohail :)
#include <bits/stdc++.h>
using namespace std;

int reverse(int rem)
{
    int ans = 0;
    while (rem > 0)
    {
        ans = (rem % 10) + (ans * 10);
        rem /= 10;
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter the decimal number: ";
    cin >> n;
    int rem = 0;

    while (n > 0)
    {
        int x = n % 2;
        rem = x + (rem * 10);
        n /= 2;
    }

    cout << reverse(rem);

    return 0;
}