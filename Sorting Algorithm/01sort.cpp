#include <bits/stdc++.h>
using namespace std;

/*
*Internal working of sort() function:-
It is a hybrid of quick sort, heap sort and insertion sort.

Worst case and average case --> O(nlogn).
*/

struct point
{
    int x, y;
};

bool myCmp(point p1, point p2)
{
    return (p1.x < p2.x);
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // --------------------- CODE HERE --------------------
    point arr[] = {{2, 3}, {4, 1}, {8, 9}};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n, myCmp);
    for (auto i : arr)
    {
        cout << i.x << " " << i.y << endl;
    }
}