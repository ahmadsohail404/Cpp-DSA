#include <bits/stdc++.h>
using namespace std;

/*
 *
 * *
 * * *
 * * * *
 */

int main()
{
    int n;
    cout << "Enter the height of the triangle: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j <= i)
                cout << "*"
                     << " ";
            else
                cout << " ";
        }
        cout << "\n";
    }

    return 0;
}