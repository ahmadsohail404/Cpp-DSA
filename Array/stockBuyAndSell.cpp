#include <bits/stdc++.h>
using namespace std;

void maxProfit(int arr[], int n, int start, int end)
{
}

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int start = 0, end = n - 1;

    maxProfit(arr, n, start, end);

    return 0;
}