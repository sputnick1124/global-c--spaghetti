#include "common.h"
#include "globals.h"
#include "x.h"

int main()
{
    A = 1.0;
    B = 2.0;
    C = 3.0;
    D = 4.0;
    POLY_DEG = 4;
    double value = poly(1.23456);
    double doubled = times_two(12.0);
    return 0;
}
