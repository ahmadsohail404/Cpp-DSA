#include <bits/stdc++.h>
using namespace std;

// Count the number of 2's and 5's
// In factorial number of 5's are less than number of 2's

// time complexity ->  5^k <= n  =>  k <= log5(n).
// Hence, Theta(log n)

int count_zero(int n)
{
    int res = 0;
    for (int i = 5; i <= n; i = i * 5)
    {
        res += n / i;
    }
    return res;
}

int main()
{
    int n;
    cin >> n;
    cout << count_zero(n);
}