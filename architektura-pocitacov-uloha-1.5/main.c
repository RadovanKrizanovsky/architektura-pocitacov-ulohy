#include <stdio.h>

int main() {

    char zoznam[100];
    int  index = 1;
    int var = 0;
    int sucet = 0;
    int komplement1 = 0;
    int komplement2 = 0;

    scanf("%s", zoznam);

    char znak = zoznam[index];
    char zoznam_znakov[] = {'X','x','A','a','B','b','C','c','D','d','E','e','F','f'};
    //                       0   1   2   3   4   5   6   7   8   9   10  11  12  13

    while(znak != zoznam_znakov[0] && znak != zoznam_znakov[1]){

        if(znak == zoznam_znakov[2] || znak == zoznam_znakov[3]){
            var = 10;
        }
        else if(znak == zoznam_znakov[4] || znak == zoznam_znakov[5]){
            var = 11;
        }
        else if(znak == zoznam_znakov[6] || znak == zoznam_znakov[7]){
            var = 12;
        }
        else if(znak == zoznam_znakov[8] || znak == zoznam_znakov[9]){
            var = 13;
        }
        else if(znak == zoznam_znakov[10] || znak == zoznam_znakov[11]){
            var = 14;
        }
        else if(znak == zoznam_znakov[12] || znak == zoznam_znakov[13]){
            var = 15;
        }
        else if(znak == '0'){
            var = 0;
        }
        else if(znak == '1'){
            var = 1;
        }
        else if(znak == '2'){
            var = 2;
        }
        else if(znak == '3'){
            var = 3;
        }
        else if(znak == '4'){
            var = 4;
        }
        else if(znak == '5'){
            var = 5;
        }
        else if(znak == '6'){
            var = 6;
        }
        else if(znak == '7'){
            var = 7;
        }
        else if(znak == '8'){
            var = 8;
        }
        else if(znak == '9'){
            var = 9;
        }



        if(index % 2 != 0){

            sucet = sucet + var * 16;

        }
        else if (index % 2 == 0){

            sucet = sucet + var;

        }

        index++;
        znak = zoznam[index];
    }

    index = 0;
    znak = zoznam[index];

    komplement1 = sucet % 256;
    komplement2 = 255 - komplement1 + 1;


    while(znak != zoznam_znakov[0] && znak != zoznam_znakov[1]){
        printf("%c", znak);
        index++;
        znak = zoznam[index];
    }

    printf("%x", komplement2);

    return 0;
}
