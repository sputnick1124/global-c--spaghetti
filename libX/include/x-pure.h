#pragma once

namespace x_pure
{
    double times_two(double x);

    namespace purified
    {
        struct PolyParams {
            int degree = 2;
            double a = 0.0, b = 0.0, c = 0.0, d = 0.0;
        };
        double poly(double x, PolyParams params);
    }
}
