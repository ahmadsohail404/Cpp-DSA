#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    float y;
    cin >> x >> y;

    if (x % 5 != 0)
        cout << fixed << setprecision(2) << y;

    else if (x >= y)
        cout << fixed << setprecision(2) << y;
    else if (x % 5 == 0)
    {
        y = y - x - 0.50;
        cout << fixed << setprecision(2) << y;
    }

    return 0;
}