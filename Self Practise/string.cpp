//Code by Sohail :)
#include <bits/stdc++.h>
using namespace std;

void fun(string &&s) //const is important here otherwise it won't compile.
                     //or you can use &&
{
    s = "Hi " + s;
    cout << s;
}

int main()
{
    fun("Chikorita");

    return 0;
}