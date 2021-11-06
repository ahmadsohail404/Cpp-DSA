#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n][n];
    int i = 0;
    int j = 0;

    for (; i < n; i++)
        for (; j < n; j++)
            cin >> arr[i][j];
    cout << arr[n][n];
    return 0;
}