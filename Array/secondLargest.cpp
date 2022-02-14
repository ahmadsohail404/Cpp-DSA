#include <bits/stdc++.h>
using namespace std;

int getLargest(int arr[], int n)
{
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

int secondLargest(int arr[], int n)
{
    int largest = getLargest(arr, n);
    int res = -1;
    for (int i = 1; i < n; i++)
    {
        if ((arr[i] != largest) || (arr[i] > arr[res]))
            res = i;
    }
    return res;
}

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "The largest is: " << getLargest(arr, n) << endl;
    cout << "The second largest is: " << secondLargest(arr, n) << endl;

    return 0;
}