#include <bits/stdc++.h>
using namespace std;

// decimal to binary
void fun(int n)
{
    if (n == 0)
        return;
    else
        fun(n / 2);
    cout << n % 2;
}

int main()
{

    cout << "Enter the decimal number: ";
    int n;
    cin >> n;
    cout << "The binary form is: ";
    fun(n);

    return 0;
}