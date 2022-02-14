#include <bits/stdc++.h>
using namespace std;

int secondLargest(int arr[], int n)
{
    int largest = 0, second = -1;
    for (int i = 1; i < n; i++) // Don't forget to include equality.
    {
        if (arr[i] > arr[largest])
        {
            second = largest;
            largest = i;
        }
        else if (arr[i] != arr[largest])
        {
            if (second == -1 || arr[i] > arr[second])
                second = i;
        }
    }
    return second;
}

/*
int secondLargest(int arr[], int n)
{
    if(n<2)
        return -1;
    sort(arr, arr+n);

    for(int i=n-2;i>=0;i--)
    {
        if(arr[i] != arr[n-1])
            return arr[i];
    }
    return -1;
}

*/

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "The second largest index is: " << secondLargest(arr, n) << endl;

    return 0;
}