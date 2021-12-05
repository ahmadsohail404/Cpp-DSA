#include <bits/stdc++.h>
using namespace std;

unsigned int factorial(unsigned int n)
{
    if (n == 0)
        return 1;
    else
    {
        return n * factorial(n - 1);
    }
}

int main()
{
    cout << "Enter a number to find the factorial: ";
    int n;
    cin >> n;
    cout << "Factorial is: ";
    cout << factorial(n);
}