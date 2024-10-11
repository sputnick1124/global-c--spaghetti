#include "extern.h"
#include "x.h"

double poly(double x) {
  return x_pure::purified::poly(x, {.degree = POLY_DEG, .a = A, .b = B, .c = C, .d = D});
}
