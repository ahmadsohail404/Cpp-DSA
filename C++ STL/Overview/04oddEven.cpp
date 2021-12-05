#include "bits/stdc++.h"
using namespace std;

int main()
{
    vector<int> v{2, 6, 1, 3, 4, 3};

    vector<int> even;
    vector<int> odd;

    for (int i = 0; i < 6; i++)
    {
        if (v[i] % 2 == 0)
            even.push_back(v[i]);
        else
            odd.push_back(v[i]);
    }

    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end());

    for (int i = 0; i < even.size(); i++)
        cout << even[i] << " ";

    cout << endl;

    for (int i = 0; i < odd.size(); i++)
        cout << odd[i] << " ";

    return 0;
}