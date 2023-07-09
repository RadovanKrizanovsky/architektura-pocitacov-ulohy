#include <stdio.h>

int main() {


    //////////////////////////////////
    printf("\n------------------Pole a adresa------------------\n\n");
    /////////////////////////////////


    char pole_znakov[] = "architektura_pocitacov_je_super_predmet_milujem_ho";
    char *adresa = &pole_znakov;
    printf("pole znakov: %s\n", pole_znakov);
    printf("jeho adresa: %p\n", adresa);
    printf("\n");


    //////////////////////////////////
    printf("\n------------------Prepis modifikovanej adresy------------------\n\n");
    /////////////////////////////////


    adresa = adresa + 1;
    *adresa = 'X';
    printf("druha(zmenena) adresa na ktoru som zapisoval: %p\n", adresa);
    printf("pole znakov znova(2): %s\n", pole_znakov);
    printf("\n");

    //////////////////////////////////
    printf("\n------------------Prepis manualne zadanej adresy------------------\n\n");
    /////////////////////////////////


    char *druha_adresa = (char *) 0x61FDD9;
    *druha_adresa = 'X';
    printf("tretia(zmenena) adresa na ktoru som zapisoval: %p\n", druha_adresa);
    printf("pole znakov znova(3): %s\n", pole_znakov);
    printf("\n");


    //////////////////////////////////
    printf("\n------------------Uprava dalsej adresy------------------\n\n");
    /////////////////////////////////

    //funguje
    //char *tretia_adresa = (char *) 0x61FEEE;

    //nefunguje
    char *tretia_adresa = (char *) 0x13151151416;

    *tretia_adresa = 'X';
    printf("nahodna adresa: %p\n", tretia_adresa);
    printf("znak pred adresov: %c\n", tretia_adresa -1);
    printf("znak na adrese: %c\n", tretia_adresa);
    printf("znak po adrese: %c\n", tretia_adresa +1);

    return 0;
}
