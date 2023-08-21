#include "mathlib.h"

/* Program uses a while loop
 to iterate through the computaion
 untill the last term of the summotion
 hit EPSILON. This while loop contains a
 non function power function (using a for loop),
 dividing 1 by 3 raised to the number of terms
 multiplied by (twice the number of terms + 1),
 updates new terms and adds it to the total sum, 
 which gives the approximate val of pi.*/

double pi_madhava(void) {
    double k = 0.0;
    long double sum = 0.0;
    double newest = 1.0;
    while (absolute(newest) > EPSILON) {
        double power = 1.0;
        for (int i = 0; i < k; i++) {
            power *= -3;
        }
        newest = 1 / (power * ((2 * k) + 1));
        sum += newest;
        k++;
    }
    return (sqrt_newton(12) * sum);
}

int pi_madhava_terms(void) {
    double k = 0.0;
    long double sum = 0.0;
    double newest = 1.0;
    while (absolute(newest) > EPSILON) {
        double power = 1.0;
        for (int i = 0; i < k; i++) {
            power *= -3;
        }
        newest = 1 / (power * ((2 * k) + 1));
        sum += newest;
        k++;
    }
    return k;
}
