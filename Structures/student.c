//Coded by Sohail :)
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

struct point
{
    int x;
    int y;
};

int main()
{
    struct point p = {.x = 10, .y = 39};
    printf("%d %d", p.x, p.y);

    return 0;
}