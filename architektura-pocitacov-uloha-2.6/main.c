#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <time.h>


void navod(){

    printf("Navod na pouzitie\n");
    printf("\n");
    printf("F1 -> Navod\n");
    printf("F2 -> Spustenie merania/novy znak\n");
    printf("F10 -> Ukoncenie\n");
    printf("ESC -> Ukoncenie\n");

    printf("\nSpustenim merania sa vam zacne meriat cas\n"
           "a vasou ulohou je stlacit na klavesnici znak\n"
           "ktory sa zobrazuje v strede konzoli");
}

int main() {

    system("cls");
    printf("(F1->Napoveda)");

    srand(time(0));
    clock_t start, finish;
    float time;
    char nahodny_znak = 36;

    int loop = 1;
    char znak;
    int a = 0;
    int meranie = 0;
    int ukoncenie = 0;

    HANDLE  hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    COORD bod;
    bod.X = 61;
    bod.Y = 14;

    while (ukoncenie == 0){

        meranie = 0;
        znak= 40;
        loop = 1;

        while(znak != nahodny_znak && loop == 1){
            if(kbhit()){
                znak = getch();
                switch(znak){

                    case 0x00: a = getch();
                        if (a == 59 && meranie == 0){
                            system("cls");
                            navod();
                        }

                        else if (a == 60 && meranie == 0){
                            system("cls");
                            bod.X = 61;
                            bod.Y = 14;
                            SetConsoleCursorPosition(hConsole, bod);
                            nahodny_znak = (rand()%(90-65))+97;
                            printf("%c", nahodny_znak);
                            meranie = 1;
                            start = clock();
                        }

                        else if (a == 68){
                            ukoncenie = 1;
                            loop = 0;
                            system("cls");
                        }
                        break;
                    case 27:
                        ukoncenie = 1;
                        loop = 0;
                        system("cls");
                        break;
                }
            }
        }

        finish = clock();

        if (znak == nahodny_znak){
            time = ((float)(finish - start) / CLOCKS_PER_SEC);
            bod.X = 0;
            bod.Y = 22;
            SetConsoleCursorPosition(hConsole, bod);
            printf("cas: %f", time);
            printf("\n");

        }

    }

    printf("Pre potvrdenie ukoncenia stlac ENTER\n");
    scanf("?");

    return(0);


}
