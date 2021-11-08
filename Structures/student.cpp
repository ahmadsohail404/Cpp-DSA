//#include<bits/stdc++.h>
#include <iostream>
using namespace std;

struct student
{
    int roll;
    string name;
    float marks;
};

int main()
{
    student s = {47, "Sohail", 82.2};
    cout << s.roll << " " << s.name << " " << s.marks;

    return 0;
}