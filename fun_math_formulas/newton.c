#include "mathlib.h"

//This is the code translated from python to C from the asgn2 pdf

static int iters = 0;

double sqrt_newton(double number) {
    double cur = 1.0;
    double old = 0.0;

    while (absolute(cur - old) > EPSILON) {
        old = cur;
        cur = 0.5 * (cur + number / cur);
        iters += 1;
    }

    return (cur);
}

int sqrt_newton_iters(void) {
    return iters;
}
