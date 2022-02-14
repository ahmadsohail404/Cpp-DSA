//#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    string str;
    cin >> str;
    string str2;

    int n = str.length() - 1;

    for (int i = 0; i <= n; i++)
    {
        cout << str[n - i];
    }

    // while (n >= 0)
    // {
    //     str2 += str[n];
    //     n--;
    // }
    // cout << str2;

    return 0;
}