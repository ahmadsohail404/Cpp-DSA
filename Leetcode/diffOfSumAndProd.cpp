//Code by Sohail :)
// Difference of product and sum of of a given number's digits.
#include <bits/stdc++.h>
using namespace std;

int subtractProductAndSum(int n)
{

    int sum = 0;
    int prod = 1;
    int temp = n;
    while (n > 0)
    {
        sum += (n % 10);
        n /= 10;
    }

    while (temp > 0)
    {
        prod *= temp % 10;
        temp /= 10;
    }
    return (prod - sum);
}

int main()
{
    int n;
    cin >> n;

    cout << subtractProductAndSum(n);

    return 0;
}