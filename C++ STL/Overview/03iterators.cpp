#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {10, 20, 30, 40, 50};
    // vector<int>::iterator i = v.begin();
    auto i = v.begin(); // we can use this too

    i = next(i);

    cout << (*i) << " "; //20
    i = next(i, 2);
    cout << (*i) << " "; //40

    i = prev(i);
    cout << (*i) << " "; //30
    return 0;
}