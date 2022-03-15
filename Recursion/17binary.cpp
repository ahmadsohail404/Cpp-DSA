#include <bits/stdc++.h>
using namespace std;

int binary(int a[], int l, int h, int k)
{
    if (l == h)
    {
        if (a[l] == k)
            return l;
        else
            return -1;
    }
    else
    {
        int mid = (l + h) / 2;
        if (k == a[mid])
            return mid;
        else if (k < a[mid])
            return binary(a, l, mid - 1, k);
        else
            return binary(a, mid + 1, h, k);
    }
}

int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int low = 0, high = 6, key;
    cin >> key;

    int index = binary(arr, low, high, key);

    if (index >= 0)
        cout << "Element is present at index: " << index << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}