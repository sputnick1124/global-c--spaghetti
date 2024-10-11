#pragma once

namespace X
{

    double times_two(double x);

    namespace deglobaled
    {

        struct PolyParams
        {
            int degree = 2;
            double a = 0.0;
            double b = 0.0;
            double c = 0.0;
            double d = 0.0;
        };

        double poly(double x, PolyParams params);

    }

}
