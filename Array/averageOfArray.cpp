//Code by Sohail :)
#include <bits/stdc++.h>
using namespace std;

int average(int arr[], int n)
{
    int average = 0;
    for (int i = 0; i < n; i++)
    {
        average = average + arr[i];
    }
    return average / double(n);
}

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << average(arr, n);

    return 0;
}