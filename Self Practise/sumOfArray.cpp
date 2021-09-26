//Code by Sohail :)
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

int main()
{
    // int n;
    // cin >> n;
    // int arr[n];
    // for (int i = 0; i < n; i++)
    //     cin >> arr[i];

    // int sum = 0;

    // for (int i = 0; i < n; i++)
    // {
    //     sum = sum + arr[i];
    // }
    // cout << sum;

    vector<int> v{10, 20, 30, 40, 50};

    int s = 0;
    s = accumulate(v.begin(), v.end(), s);
    cout << s;

    return 0;
}