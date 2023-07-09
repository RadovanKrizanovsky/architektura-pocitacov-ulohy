#include <stdio.h>

static int _Vysledok, _Cislo, _Cislo2, _Aa;


int dvojnasobok(int _Vstup){

    _Cislo = _Vstup;

    asm(".intel_syntax noprefix \n"

        "mov eax,_Cislo        \n"
        "shl eax                \n"
        "mov _Vysledok,eax     \n"

        ".att_syntax            \n");

    return _Vysledok;

}

int main(){
    printf("------------------------------------------------------------\n");
    printf("Zadaj cislo:");
    scanf("%d", &_Cislo2);
    printf("------------------------------------------------------------\n");
    printf("Dvojnasobok cisla: ");
    _Aa = dvojnasobok(_Cislo2);
    printf("%d", _Aa);
    printf("\n------------------------------------------------------------");


    return(0);
}

