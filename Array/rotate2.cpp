#include <bits/stdc++.h>
using namespace std;

void leftRotate(int arr[], int d, int n)
{
    int temp[d];
    for (int i = 0; i < d; i++)
    {
        temp[i] = arr[i];
    }
    for (int i = d; i < n; i++)
    {
        arr[i - d] = arr[i];
    }
    for (int i = 0; i < d; i++)
    {
        arr[n - d + i] = temp[i];
    }
}

int main()
{
    int n;
    cin >> n;
    int d;
    cin >> d;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    leftRotate(arr, d, n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}