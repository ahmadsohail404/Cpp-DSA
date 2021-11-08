//#include<bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string binaryToDecimal(int n)
{
    int rem = 0;
    string s = "";
    while (n > 0)
    {
        rem = n % 2;
        s += to_string(rem);
        n /= 2;
    }
    reverse(s.begin(), s.end());
    return s;
}

int main()
{
    int n;
    cin >> n;
    cout << binaryToDecimal(n);

    return 0;
}