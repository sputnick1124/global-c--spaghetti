#pragma once

#include "extern.h"
#include "x-pure.h"

// pure functions which need no modification
using X::times_two;

// functions which have been deglobaled
inline double poly(double x) {
  return X::deglobaled::poly(
      x, {.degree = POLY_DEG, .a = A, .b = B, .c = C, .d = D});
}
