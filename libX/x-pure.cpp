#include "common.h"
#include "x-pure.h"

namespace X
{
    double times_two(double x)
    {
        return x * 2;
    }

    namespace deglobaled 
    {


        double poly(double x, PolyParams params)
        {
            double retval =  params.a + params.b*x;
            DBG_PRINT("A: %lf, B*x: %lf", params.a, params.b*x);
            if (params.degree > 2) {
                retval += params.c*x*x;
                DBG_PRINT(", C*x^2: %lf", params.c*x*x);
            }
            if (params.degree > 3) {
                retval += params.d*x*x*x;
                DBG_PRINT(", D*x^3: %lf", params.d*x*x*x);
            }
            DBG_PRINT("\n");
            return retval;
        }

    }

}
