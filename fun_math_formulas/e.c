#include "mathlib.h"

/* Program uses a while loop
 to iterate through the sum series 
 by computing 1 / number of terms factorial
 untill the last term of the summotion
 hit EPSILON. Then it updates the new terms and
 adds it to the total sum, which results in "e".*/

double e(void) {
    int k = 0;
    long double sum = 0.0;
    double newest = 1.0;
    while (newest > EPSILON) {
        newest = 1;
        for (double i = k; i > 0; i -= 1) {
            newest *= 1 / i;
        }
        sum += newest;
        k += 1;
    }

    return sum;
}

int e_terms(void) {
    int k = 0;
    long double sum = 0.0;
    double newest = 1.0;
    while (newest > EPSILON) {
        newest = 1;
        for (double i = k; i > 0; i -= 1) {
            newest *= 1 / i;
        }
        sum += newest;
        k += 1;
    }
    return k;
}
