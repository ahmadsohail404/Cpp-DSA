//#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    string s1;
    cin >> s1;
    string s2;
    int n = s1.length() - 1;

    while (n >= 0)
    {
        s2 += s1[n];
        n--;
    }

    if (s1 == s2)
        cout << "Palindrome" << endl;
    else
        cout << "Not Palindrome" << endl;

    return 0;
}