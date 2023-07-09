#include <stdio.h>

int main() {

    int cislo;
    printf("Desiatkove cislo:");
    scanf("%d", &cislo);

    if(cislo > 0){
        printf("Rimske cislo:");
    }
    else{
        printf("ERROR");
    }

    while(cislo >= 1000){
        printf("M");
        cislo = cislo - 1000;
    }
    if(cislo >= 900){
        printf("CM");
        cislo = cislo - 900;
    }
    while(cislo >= 500){
        printf("D");
        cislo = cislo - 500;
    }
    if(cislo >= 400){
        printf("CD");
        cislo = cislo - 400;
    }
    while(cislo >= 100){
        printf("C");
        cislo = cislo - 100;
    }
    if(cislo >= 90){
        printf("XC");
        cislo = cislo - 90;
    }
    while(cislo >= 50){
        printf("L");
        cislo = cislo - 50;
    }
    if(cislo >= 40){
        printf("XL");
        cislo = cislo - 40;
    }
    while(cislo >= 10){
        printf("X");
        cislo = cislo - 10;
    }
    if(cislo >= 9){
        printf("IX");
        cislo = cislo - 9;
    }
    while(cislo >= 5){
        printf("V");
        cislo = cislo - 5;
    }
    if(cislo >= 4){
        printf("IV");
        cislo = cislo - 4;
    }
    while(cislo >= 1){
        printf("I");
        cislo = cislo - 1;
    }

    return 0;
}
