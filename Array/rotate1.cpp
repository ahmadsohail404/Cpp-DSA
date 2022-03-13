#include <bits/stdc++.h>
using namespace std;

void leftRotateOne(int arr[], int n)
{
    int temp = arr[0];
    for (int i = 1; i < n; i++)
    {
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = temp;
}

void leftRotate(int arr[], int d, int n)
{
    for (int i = 0; i < d - 1; i++)
    {
        leftRotateOne(arr, n);
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
    leftRotateOne(arr, n);
    leftRotate(arr, d, n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}