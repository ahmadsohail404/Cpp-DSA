//#include<bits/stdc++.h>
#include <iostream>
using namespace std;

void binaryToDecimal(string s)
{
    int base = 1;
    int sum = 0;
    for (int i = (s.length() - 1); i >= 0; i--)
    {
        sum += (int(s[i] - '0') * base);
        base *= 2;
    }
    cout << sum;
}

int main()
{
    string s;
    cin >> s;
    binaryToDecimal(s);

    return 0;
}