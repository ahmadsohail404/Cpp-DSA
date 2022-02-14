#include <stdio.h>
#include <stdlib.h>

struct term
{
    int coeff;
    int x, y, z;
    struct term *next;
};
void display(struct term *poly);
void polyappend(struct term **poly, int x, int y, int z)
{
}
