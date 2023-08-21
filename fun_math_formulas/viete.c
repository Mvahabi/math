#include "mathlib.h"

/* Program uses a while loop
 to iterate through the computaion
 untill the value of the new term reaches
 hit EPSILON. This while loop contains a
 square root function that take 2 as its argument
 and adds a 2 to the square root of 2 at every new 
 iteration, then dividing the new term by 2,
 later it updates the new terms by mutilplying 
 it by its previous result and divides that 
 entire result from 2.*/

double pi_viete() {
    double nume = sqrt_newton(2);
    double k = 0.0;
    int denom = 2;
    double res = 1.0;
    double new = 0.0;

    while (absolute(1 - new) > EPSILON) {
        new = nume / denom;
        res *= new;
        nume = sqrt_newton(2 + nume);
        k++;
    }
    res = 2 / res;
    return res;
}

int pi_viete_factors() {
    double nume = sqrt_newton(2);
    double k = 0.0;
    int denom = 2;
    double res = 1.0;
    double new = 0.0;

    while (absolute(1 - new) > EPSILON) {
        new = nume / denom;
        res *= new;
        nume = sqrt_newton(2 + nume);
        k++;
    }

    return k;
}
