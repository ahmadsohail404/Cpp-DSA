//Code by Sohail :)
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cout << "Input two numbers: ";
    cin >> a >> b;
    int x = min(a, b);
    int ans = 1;

    for (int i = 1; i <= x; i++)
    {
        if (a % i == 0 && b % i == 0)
            ans = i;
    }
    cout << "GCD is: " << ans << endl;

    return 0;
}