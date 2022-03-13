#include <stdio.h>
#include <stdlib.h>

struct student
{
    int roll;
    char name[20];
    float marks;
};

int main()
{
    struct student s;
    s.roll = 14;
    struct student *ptr = &s;
    printf("Roll no. is %d\n", ptr->roll);

    return 0;
}