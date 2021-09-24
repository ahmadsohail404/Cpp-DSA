//Code by Sohail :)
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int fact = 1;

    // for (int i = n; i >= 1; i--)
    // {
    //     fact *= i;
    // }

    while (n > 0)
    {
        fact *= n;
        n--;
    }

    cout << fact;

    return 0;
}