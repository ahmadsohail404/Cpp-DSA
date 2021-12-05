#include <bits/stdc++.h>
using namespace std;

int fun(int n)
{
    if (n == 1)
        return 0;
    else
        return 1 + fun(n / 2);
}

int main()
{
    cout << fun(4);

    return 0;
}

// The nature of the function is Log N base 2.