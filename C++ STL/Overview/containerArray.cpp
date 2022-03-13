#include <bits/stdc++.h>
using namespace std;

int main()
{
    array<int, 5> arr; //--> {?,?,?,?,?} garbage values
                       // if globally -> {0,0,0,0,0}
    // array<int, 5> arr = {1, 2, 3}; // -> {1,2,3,0,0}

    arr.fill(1); //-> {1,1,1,1,1}

    for (int i = 0; i < 5; i++)
    {
        cout << arr.at(i) << " ";
    }

    // iterators

    return 0;
}