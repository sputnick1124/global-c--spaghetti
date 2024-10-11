#include "x-pure.h"

namespace x_pure
{
    double times_two(double x) {
        return x * 2;
    }

    namespace purified 
    {
        double poly(double x, PolyParams params) {
            double retval =  params.a + params.b*x;
            if (params.degree > 2) retval += params.c*x*x;
            if (params.degree > 3) retval += params.d*x*x*x;
            return retval;
        }

    }

}
