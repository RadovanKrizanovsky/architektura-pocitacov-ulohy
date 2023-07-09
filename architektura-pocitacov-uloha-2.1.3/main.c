#include <stdio.h>

static int _Cislo = 0;
static int _Desat = 10;
static int _Anula = 48;
static int _Pp = 55;
static int _Znak = 0, _Aa = 0;


int hexa(int _Vstup){

    _Cislo = _Vstup;

    asm(".intel_syntax noprefix \n"

        "mov eax, _Cislo        \n"
        "mov ebx, _Desat        \n"
        "cmp ebx, eax           \n"
        "jg jevecsie           \n"
        "mov ebx, _Pp       \n"
        "add eax, ebx        \n"
        "jmp koniec        \n"


        "jevecsie:           \n"
        "mov ebx, _Anula      \n"
        "add eax, ebx        \n"

        "koniec:             \n"
        "mov _Znak, eax        \n"

        ".att_syntax            \n");

    return _Znak;

}

int main(){


    int _Cislo2 = 0;

    printf("------------------------------------------------------------\n");
    printf("Zadaj cislo:");
    scanf("%d", &_Cislo2);
    printf("------------------------------------------------------------\n");

    if (_Cislo2 >= 0 && _Cislo2 <= 15){
        printf("Hexa: ");
        _Aa = hexa(_Cislo2);
        printf("%c", _Aa);
        printf("\n------------------------------------------------------------");
    }
    else{
        printf("ERROR");
        printf("\n------------------------------------------------------------");
    }

    return(0);
}

