//Code by Sohail :)
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int count = 0;

    while (n > 0)
    {
        n /= 10;
        count++;
    }
    cout << count;

    return 0;
}