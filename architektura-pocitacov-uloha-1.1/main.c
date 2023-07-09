#include <stdio.h>

void menicNaDvojkovu(int x){

    int cyklus = 1;
    int cisla[30];
    int pozicia = 0;
    int pocetPrvkov = 0;
    int i;

    //vytvorenie zoznamu s bitmy
    while(cyklus == 1){
        if(x > 1){

            if(x % 2 > 0){
                x = x / 2;
                cisla[pozicia] = 1;
                pozicia++;
                pocetPrvkov++;
            }
            else if(x % 2 == 0){
                x = x / 2;
                cisla[pozicia] = 0;
                pozicia++;
                pocetPrvkov++;
            }
        }
        else if(x == 1){
            cisla[pozicia] = 1;
            pocetPrvkov++;
            cyklus = 0;
        }
    }
    //otocenie a vypisanie prvkov
    for(i = pocetPrvkov; i>0; i--){
        printf("%d", cisla[pozicia]);
        pozicia--;

    }
}

int main() {

    int cislo = 33777;
    int asciiX = 88;

    //2
    printf("-------------------------------------------------\n");
    printf("Dvojkova forma cisla \"%d\" je: ", cislo);
    menicNaDvojkovu(cislo);
    printf("\n");
    printf("Dvojkova forma cisla \"%d\" je: ", asciiX);
    menicNaDvojkovu(asciiX);
    printf("\n");

    //10
    printf("-------------------------------------------------\n");
    printf("Desiatkova forma cisla \"%d\" je: %d \n", cislo, cislo);
    printf("Desiatkova forma cisla \"%d\" je: %d \n", asciiX, asciiX);
    printf("-------------------------------------------------\n");

    //16
    printf("Hexadecimalna forma cisla \"%d\" je: %x \n", cislo, cislo);
    printf("Hexadecimalna forma cisla \"%d\" je: %x \n", asciiX, asciiX);
    printf("-------------------------------------------------\n");

    return 0;
}

