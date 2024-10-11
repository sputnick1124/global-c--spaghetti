#include "y.h"

#include "x-pure.h"

double quadruple(double x)
{
    return x_pure::times_two(x_pure::times_two(x));
}
