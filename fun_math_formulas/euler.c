#include "mathlib.h"

/* Program uses a while loop 
 to iterate through the computaion
 untill the last term of the summotion 
 hit EPSILON. This while loop contains a 
 division of 1 over the number of terms
 squared, updates new terms and adds it to
 the total sum, multiplies it by 6  and
 returns that number as a square root.*/

double pi_euler(void) {
    int counter = 0;
    long double sum = 0.0;
    double newest = 1.0;
    double i = 1.0;
    while (newest > EPSILON) {
        newest = 1.0 / (i * i);
        sum += newest;
        i += 1;
        counter += 1;
    }
    sum *= 6.0;
    double res = sqrt_newton(sum);

    return res;
}

int pi_euler_terms(void) {
    int counter = 0;
    long double sum = 0.0;
    double newest = 1.0;
    double i = 1.0;
    while (newest > EPSILON) {
        newest = 1.0 / (i * i);
        sum += newest;
        i += 1;
        counter += 1;
    }

    return counter;
}
