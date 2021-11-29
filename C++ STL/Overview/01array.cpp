#include <bits/stdc++.h>
using namespace std;

//1.sort
//2.binary_search

int main()
{
    int arr[] = {10, 15, 8, 20};

    sort(arr, arr + 4);
    for (int i = 0; i < 4; i++)
        cout << arr[i] << " ";
    cout << endl;

    if (binary_search(arr, arr + 4, 6))
        cout << "Present";
    else
        cout << "Not present";

    return 0;
}