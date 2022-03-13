// reversal algorithm

#include <bits/stdc++.h>
using namespace std;

void reverse(int arr[], int low, int high)
{
    while (low < high)
    {
        swap(arr[low++], arr[high--]);
        // low++;
        // high--;
    }
}
void leftRotate(int arr[], int n, int d)
{
    reverse(arr, 0, d - 1);
    reverse(arr, d, n - 1);
    reverse(arr, 0, n - 1);
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

    int low = 0, high = n - 1;
    leftRotate(arr, n, d);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}