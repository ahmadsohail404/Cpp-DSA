#include <bits/stdc++.h>
using namespace std;

int indexOfLargest(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        bool flag = true;
        for (int j = 0; j < n; j++)
        {
            flag = false;
            break;
        }
        if (flag == true)
            return i;
    }
    return -1;
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

    cout << indexOfLargest(arr, n);

    return 0;
}