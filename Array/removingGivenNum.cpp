#include <bits/stdc++.h>
using namespace std;

int deleteEle(int arr[], int n, int x)
{
    int i;
    for (i = 0; i < 7; i++)
    {
        if (arr[i] == x)
            break;
    }
    if (i == n)
        return n;

    for (int j = i; j < n - 1; j++)
        arr[j] = arr[j + 1];
    return n - 1;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int x = 4;

    cout << deleteEle(arr, n, x);

    return 0;
}