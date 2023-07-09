#include <stdio.h>


float umocnenie(float umocnovane_cislo, int na_aku){

    int i;
    float vysledok = umocnovane_cislo;

    for(i = na_aku-1; i > 0; i--){
        vysledok = vysledok * umocnovane_cislo;
    }

    return vysledok;
}

float faktorial(float cislo){

    int i;
    float vysledok = cislo;

    for(i = cislo-1; i > 0; i--){
        vysledok = vysledok * i;
    }

    return vysledok;
}

float sinus(float radians, float epsilon){


    while(radians > 6.28318531){
        radians = radians - 6.28318531;
    }
    while(radians < -6.28318531){
        radians = radians + 6.28318531;
    }



    int cyklus = 1;
    int fail = 0;
    float predosle_cislo = radians;
    float nove_cislo = (umocnenie(radians, 3))/(faktorial(3.0));
    float n = 2.0;
    float sucet = (predosle_cislo) - (nove_cislo);


    while(cyklus == 1){

        if(nove_cislo - predosle_cislo >= epsilon){
            predosle_cislo = nove_cislo;
            nove_cislo = ((umocnenie((-1.0), n))*(umocnenie(radians, (2.0*n+1.0))))/(faktorial(2.0*n+1.0));
            sucet = (sucet) + (nove_cislo);
            n++;
        }
        else{
            predosle_cislo = nove_cislo;
            nove_cislo = ((umocnenie((-1.0), n))*(umocnenie(radians, (2.0*n+1.0))))/(faktorial(2.0*n+1.0));
            sucet = (sucet) + (nove_cislo);
            n++;
            fail++;
            if (fail==5){
                cyklus = 0;
            }
        }

    }

    return sucet;
}


int main() {

    float a;
    float b;

    printf("--------------------------------------------------------------------------\n");
    printf("Radians: ");
    scanf("%f", &a);
    printf("\n");
    printf("Epsilon: ");
    scanf("%f", &b);
    printf("\n");
    float x = sinus(a, b);
    printf("Vysledok: %f\n", x);
    printf("--------------------------------------------------------------------------");


    return 0;
}
