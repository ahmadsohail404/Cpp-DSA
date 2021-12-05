#include <bits/stdc++.h>
using namespace std;

// TODO: Trust the function -> Recursive leap of faith

// for 10 to 1.
// void say_hello(int n)
// {
//     if (n == 0)
//         return;
//     cout << "hello " << n << "\n";
//     say_hello(n - 1); // first n-1 lines.
// }

// for 1 to 10.
void say_hello(int n)
{
    if (n == 0)
        return;
    say_hello(n - 1); // first n-1 lines.
    cout << "hello " << n << "\n";
}

int main()
{
    say_hello(10);

    return 0;
}