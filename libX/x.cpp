#include "common.h"
#include "extern.h"
#include "x.h"

double poly(double x)
{
    double retval =  A + B*x;
    DBG_PRINT("A: %lf, B*x: %lf", A, B*x);
    if (POLY_DEG > 2) {
        retval += C*x*x;
        DBG_PRINT(", C*x^2: %lf", C*x*x);
    }
    if (POLY_DEG > 3) {
        retval += D*x*x*x;
        DBG_PRINT(", D*x^3: %lf", D*x*x*x);
    }
    DBG_PRINT("\n");
    return retval;
}

double times_two(double x)
{
    return x * 2;
}
