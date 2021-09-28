//Code by Sohail :)
#include <bits/stdc++.h>
using namespace std;

void fun(const string &s) //const is important here otherwise it won't compile.
{
    cout << s;
}

int main()
{
    fun("Meow Meow");

    return 0;
}