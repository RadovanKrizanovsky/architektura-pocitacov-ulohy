#include <stdio.h>
#include <windows.h>

int main() {

    int c = 0;
    int a = 0;
    int farba = 1;
    HANDLE cmd;
    cmd = GetStdHandle(STD_OUTPUT_HANDLE);

    for(c = 0; c <= 50; c++){
        if(a == 4){
            farba++;
            a = 0;
        }
        SetConsoleTextAttribute(cmd, farba);

        if(c < 10){
            printf("00");
        }
        else if(c >= 10 && c < 100){
            printf("0");
        }
        printf("%d\n", c);

        a++;

        Sleep(1000);
    }


    return 0;
}
