//#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int sum(int n)
{
    return n * (n + 1) / 2;
}

int main()
{
    int n = 5;
    cout << sum(n);

    return 0;
}