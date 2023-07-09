#include <stdio.h>

int main() {

    float float_epsilon =  __FLT_EPSILON__;
    double double_epsilon =  __DBL_EPSILON__;

    float flt = 1.0/2.0;
    double dbl = 1.0/2.0;

    float old_flt = 1.0;
    double old_dbl = 1.0;

    while(1 + flt != 1){
        old_flt = flt;
        flt = flt / 2.0;
    }

    printf("--------------------------------------------------------------------\n");
    printf("Nami najdene (floatove) strojove epsilon: %0.40f\n", old_flt);
    printf("Skutocne (floatove) strojove epsilon:     %0.40f\n", float_epsilon);
    printf("--------------------------------------------------------------------\n");

    while(1.0 + dbl != 1.0){
        old_dbl = dbl;
        dbl = dbl / 2.0;
    }

    printf("Nami najdene (doublove) strojove epsilon: %0.40f\n", old_dbl);
    printf("Skutocne (doublove) strojove epsilon:     %0.40f\n", double_epsilon);
    printf("--------------------------------------------------------------------");

    return 0;
}
