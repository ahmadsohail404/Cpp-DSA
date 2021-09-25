//Code by Sohail :)
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    if (n == 0 || n == 1)
    {
        cout << "Neither Prime nor Composite";
        return 0;
    }

    for (int i = 2; i < n; i++)
    {
        if (n % i != 0)
        {
            cout << "Prime";
            return 0;
        }
        else
        {
            cout << "Not Prime";
            return 0;
        }
    }
    return 0;
}