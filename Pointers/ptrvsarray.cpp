#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 20, 30};
    int *ptr = arr;
    cout << sizeof(arr) << "\n"; //12
    cout << sizeof(ptr) << "\n"; //8
    cout << *(arr + 2) << "\n";  //30
    cout << ptr[2] << "\n";      //30

    return 0;
}