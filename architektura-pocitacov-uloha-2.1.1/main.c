#include <stdio.h>

static int prvecislo, druhecislo, sucet;

int main()
{
    prvecislo = 0;
    druhecislo = 0;
    sucet = 0;

    printf("------------------------------------------------------------\n");
    printf("Zadaj prve cislo:");
    scanf("%d", &prvecislo);

    printf("Zadaj druhe cislo:");
    scanf("%d", &druhecislo);

    printf("------------------------------------------------------------\n");
    printf("Prve cislo: %d\n",prvecislo);
    printf("Druhe cislo: %d\n",druhecislo);

    asm(".intel_syntax noprefix \n"

        "mov eax, prvecislo \n"
        "mov ebx, druhecislo \n"
        "add eax, ebx \n"
        "mov sucet,eax \n"

        ".att_syntax \n");

    printf("Sucet: %d\n",sucet);
    printf("------------------------------------------------------------");

    return(0);
}
