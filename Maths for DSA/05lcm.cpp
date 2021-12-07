#include <bits/stdc++.h>
using namespace std;

// Time Complexitiy = O(a*b - max(a,b))

int lcm(int a, int b)
{
    int res = max(a, b);
    while (true)
    {
        if (res % a == 0 && res % b == 0)
            return res;
        res++;
    }
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << lcm(a, b);
}