//Code by Sohail :)
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    int start = max(a, b);
    int end = a * b;
    int ans = start;

    for (int i = start; i <= end; i++)
    {
        if (i % a == 0 && i % b == 0)
        {
            ans = i;
            break;
        }
    }
    cout << "LCM is: " << ans << endl;

    return 0;
}