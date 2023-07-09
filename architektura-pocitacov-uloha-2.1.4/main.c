#include <stdio.h>

static char prve[5];
static char druhe[5];
static char tretie[5];

int main() {


    asm(".intel_syntax noprefix \n"

        "mov eax, 0             \n"
        "cpuid                  \n"
        "mov prve, ebx             \n"
        "mov druhe, edx            \n"
        "mov tretie, ecx             \n"
        ".att_syntax            \n");


    printf("%s", prve);
    printf("%s", druhe);
    printf("%s", tretie);

    return 0;
}
