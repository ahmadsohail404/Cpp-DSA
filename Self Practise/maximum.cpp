//Code by Sohail :)
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {10, 42, 4, 7, 32};
    // int res = arr[0];
    int n = sizeof(arr) / sizeof(arr[0]);

    // for (int i = 0; i < n; i++)
    //     res = max(res, arr[i]);

    // cout << res;

    int res = *max_element(arr, arr + n);
    cout << res;

    return 0;
}