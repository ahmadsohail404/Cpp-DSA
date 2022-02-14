#include <bits/stdc++.h>
using namespace std;

int largestOptimised(int arr[], int n)
{
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[max])
            max = i;
    }
    return max;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << largestOptimised(arr, n);
    return 0;
}