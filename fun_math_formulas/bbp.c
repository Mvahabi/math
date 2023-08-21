#include "mathlib.h"

/* Program uses a while loop
 to iterate through the computaion
 untill the last term of the summotion
 hit EPSILON. This while loop contains a
 for loop that takes calculates 16 ^ k,
 takes the recipricol and multiplies it
 by this complex formula that is called bbp;
 it  updates new terms and adds it to the total sum,
 which is the approximate value of pi.*/

double pi_bbp() {
    double k = 0.0;
    long double sum = 0.0;
    double newest = 1.0;
    while (newest > EPSILON) {
        double power = 1.0;
        for (int i = 0; i < k; i++) {
            power *= 16;
        }
        newest = (k * (120 * k + 151) + 47)
                 / (power * (k * (k * (k * (512 * k + 1024) + 712) + 194) + 15));
        sum += newest;
        k++;
    }
    return (sum);
}

int pi_bbp_terms() {
    double k = 0.0;
    long double sum = 0.0;
    double newest = 1.0;
    while (newest > EPSILON) {
        double power = 1.0;
        for (int i = 0; i < k; i++) {
            power *= 16;
        }
        newest = (k * (120 * k + 151) + 47)
                 / (power * (k * (k * (k * (512 * k + 1024) + 712) + 194) + 15));
        sum += newest;
        k++;
    }
    return (k);
}
