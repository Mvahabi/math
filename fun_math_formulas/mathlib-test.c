#include "mathlib.h"

#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define OPTIONS "haebmrvns"

/* This entire main function was a built up
 from the TA section video on yuja. 
 it basically takes an indirect user input
 when they run the mathlib-test, and returns
 the ideal outputs that was set using switch
 case tools. every c files were imported from
 the header file "mathlib.h" that declares 
 all the functions in this file and therfore
 used within different user options.*/

int main(int argc, char **argv) {
    int opt = 0;
    int no_input = true;
    int h_flag = false;
    int a_flag = false;
    int e_flag = false;
    int b_flag = false;
    int m_flag = false;
    int r_flag = false;
    int v_flag = false;
    int n_flag = false;
    int s_flag = false;

    while ((opt = getopt(argc, argv, OPTIONS)) != -1) {
        no_input = false;
        switch (opt) {
        case 'h': h_flag = true; break;
        case 'a': a_flag = true; break;
        case 'e': e_flag = true; break;
        case 'b': b_flag = true; break;
        case 'm': m_flag = true; break;
        case 'r': r_flag = true; break;
        case 'v': v_flag = true; break;
        case 'n': n_flag = true; break;
        case 's': s_flag = true; break;
        }
    }

    if (h_flag || no_input) {
        printf("OPTIONS\n");
        printf("  -a \t Runs all tests.\n");
        printf("  -e \t Runs e test.\n");
        printf("  -b \t Runs BBP pi test.\n");
        printf("  -m \t Runs Madhava pi test.\n");
        printf("  -r \t Runs Euler pi test.\n");
        printf("  -v \t Runs Viete pi test.\n");
        printf("  -n \t Runs Newton square root tests.\n");
        printf("  -s \t Print terms and factors for every tests.\n");
        printf("  -h \t Display program synopsis and usage.\n");
    } else if (a_flag) {
        printf("e() = %16.15f, M_E = %16.15f, diff = %16.15f\n", e(), M_E, absolute(e() - M_E));
        if (s_flag)
            printf("e() terms = %d\n", e_terms());
        printf("pi_bbp() = %16.15f, M_PI = %16.15f, diff = %16.15f\n", pi_bbp(), M_PI,
            absolute(pi_bbp() - M_PI));
        if (s_flag)
            printf("pi_bbp() terms = %d\n", pi_bbp_terms());
        printf("pi_madhava() = %16.15f, M_PI = %16.15f, diff = %16.15f\n", pi_madhava(), M_PI,
            absolute(pi_madhava() - M_PI));
        if (s_flag)
            printf("pi_madhava() terms = %d\n", pi_madhava_terms());
        printf("pi_euler() = %16.15f, M_PI = %16.15f, diff = %16.15f\n", pi_euler(), M_PI,
            absolute(pi_euler() - M_PI));
        if (s_flag)
            printf(" terms = %d\n", pi_euler_terms());
        printf("pi_viete() = %16.15f, M_PI= %16.15f, diff = %16.15f\n", pi_viete(), M_PI,
            absolute(pi_viete() - M_PI));
        if (s_flag)
            printf("pi_viete() terms = %d\n", pi_viete_factors());
        for (double i = 0.0; i <= 10.0; i += 0.1) {
            printf("sqrt_newton(%f) = %16.15f, sqrt(%f) = %16.15f, diff = %16.15f\n", i,
                sqrt_newton(i), i, sqrt(i), absolute(sqrt_newton(i) - sqrt(i)));
            if (s_flag)
                printf("sqrt_newton() terms = %d\n", sqrt_newton_iters());
        }
    } else if (e_flag) {
        printf("e() = %16.15f, M_E = %16.15f, diff = %16.15f\n", e(), M_E, absolute(e() - M_E));
        if (s_flag)
            printf("e() terms = %d\n", e_terms());
    } else if (b_flag) {
        printf("pi_bbp() = %16.15f, M_PI = %16.15f, diff = %16.15f\n", pi_bbp(), M_PI,
            absolute(pi_bbp() - M_PI));
        if (s_flag)
            printf("pi_bbp() terms = %d\n", pi_bbp_terms());
    } else if (m_flag) {
        printf("pi_madhava() = %16.15f, M_PI = %16.15f, diff = %16.15f\n", pi_madhava(), M_PI,
            absolute(pi_madhava() - M_PI));
        if (s_flag)
            printf("pi_madhava() terms = %d\n", pi_madhava_terms());
    } else if (r_flag) {
        printf("pi_euler() = %16.15f, M_PI = %16.15f, diff = %16.15f\n", pi_euler(), M_PI,
            absolute(pi_euler() - M_PI));
        if (s_flag)
            printf(" terms = %d\n", pi_euler_terms());
    } else if (v_flag) {
        printf("pi_viete() = %16.15f, M_PI= %16.15f, diff = %16.15f\n", pi_viete(), M_PI,
            absolute(pi_viete() - M_PI));
        if (s_flag)
            printf("pi_viete() terms = %d\n", pi_viete_factors());
    } else if (n_flag) {
        for (double i = 0.0; i <= 10.0; i += 0.1) {
            printf("sqrt_newton(%f) = %16.15f, sqrt(%f) = %16.15f, diff = %16.15f\n", i,
                sqrt_newton(i), i, sqrt(i), absolute(sqrt_newton(i) - sqrt(i)));
            if (s_flag)
                printf("sqrt_newton() terms = %d\n", sqrt_newton_iters());
        }
    }

    return 0;
}
