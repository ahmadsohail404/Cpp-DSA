//Code by Sohail :)
#include <bits/stdc++.h>
using namespace std;

bool sorting_check(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1])
            return false;
    }
    return true;
}

int main()
{
    int n;
    cout << "Enter the number of elements of Array: ";
    cin >> n;
    int arr[n];

    cout << "Enter the elements of the Array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    if (sorting_check(arr, n) == false)
        cout << "Not Sorted";
    else
        cout << "Sorted";

    return 0;
}