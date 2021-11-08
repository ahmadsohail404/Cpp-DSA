//#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    string str = "gfg";
    for (auto it = str.begin(); it != str.end(); it++) // for (auto& it : s) {
                                                       // cout << it << endl;
    {
        cout << *it;
    }

    return 0;
}