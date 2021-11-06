//#include<bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cout << "Enter the degree of the matrices: ";
    int n;
    cin >> n;
    vector<vector<int> > mat1(n, vector<int>(n, 0));
    vector<vector<int> > mat2(n, vector<int>(n, 0));
    vector<vector<int> > res(n, vector<int>(n, 0));

    cout << "Enter the elements of matrix 1: \n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int t;
            cin >> t;
            mat1[i][j] = t;
        }
    }

    cout << "Enter the elements of matrix 2: \n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int t;
            cin >> t;
            mat2[i][j] = t;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                res[i][j] += (mat1[i][k] * mat2[k][j]);
            }
        }
    }
    cout << "Matrix 1 is: \n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << mat1[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "Matrix 2 is: \n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << mat2[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "Resultant matrix is: \n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << res[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}