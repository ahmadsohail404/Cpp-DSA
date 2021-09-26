//Code by Sohail :)
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a = 1, b = 1;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << a << " " << b << " ";
    for (int i = 2; i < n; i++)
    {
        int c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }

    return 0;
}