//Coded by Sohail :)
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

typedef struct point
{
    int x;
    int y;
} P;

int main()
{
    P p;
    p.x = 10;
    p.y = 39;
    printf("%d %d", p.x, p.y);

    return 0;
}