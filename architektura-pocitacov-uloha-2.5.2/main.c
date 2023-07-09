#include <stdio.h>
#include <windows.h>

int main() {

    HANDLE hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    COORD bod;
    bod.X = 20; /////// <--------X
    bod.Y = 5; ///////  <--------Y

    char zaznam[] = "005";
    char meno[] = "Radovan Radovan KrizanovskyRadovan KrizanovskyRadovan Krizanovsky";
    char vyska[] = "180 cm";
    char hmotnost[] =  "80 kg";
    char tel[] = "0907 / 548 487";

    int farba1 = 14;
    int farba2 = 10;
    int sirkaT;
    int d_zaznam = sizeof(zaznam)/sizeof(zaznam[0]);
    int d_meno = sizeof(meno)/sizeof(meno[0]);
    int d_vyska= sizeof(vyska)/sizeof(vyska[0]);
    int d_hmotnost = sizeof(hmotnost)/sizeof(hmotnost[0]);
    int d_tel = sizeof(tel)/sizeof(tel[0]);
    int naj_dlzka = 0;

    if (d_zaznam >= d_meno && d_zaznam >= d_vyska && d_zaznam >= d_hmotnost && d_zaznam >= d_tel){
        naj_dlzka = d_zaznam;
    }
    else if (d_meno >= d_vyska && d_meno >= d_hmotnost && d_meno >= d_tel){
        naj_dlzka = d_meno;
    }
    else if (d_vyska >= d_hmotnost && d_vyska >= d_tel){
        naj_dlzka = d_vyska;
    }
    else if (d_hmotnost >= d_tel){
        naj_dlzka = d_hmotnost;
    }
    else{
        naj_dlzka = d_tel;
    }

    sirkaT = naj_dlzka + 6 - d_zaznam;

    ///////////////////////// HORNA LISTA /////////////////////////
    SetConsoleTextAttribute(hConsole, farba1);
    SetConsoleCursorPosition(hConsole, bod);

    int polka = sirkaT / 2;
    printf("%c", (char) 218);

    for (int i = 0; i < polka - 1; i++){
        printf("%c", (char) 196);
    }
    SetConsoleTextAttribute(hConsole, farba2);
    printf(" Zaznam %s ", zaznam);    ///////////
    SetConsoleTextAttribute(hConsole, farba1);

    if (sirkaT % 2 == 0 ){
        for (int i = 0; i < polka - 1; i++){
            printf("%c", (char) 196);
        }
    }
    else{
        for (int i = 0; i < polka; i++){
            printf("%c", (char) 196);
        }
    }
    printf("%c\n", (char) 191);

    ///////////////////////// RIADOK MENO /////////////////////////
    bod.Y++;
    SetConsoleCursorPosition(hConsole, bod);

    printf("%c", (char) 195);

    for (int i = 0; i < (sirkaT + (sizeof(zaznam)/sizeof(zaznam[0]) - 1) + 6); i++){
        if (i == 10){
            printf("%c", (char) 194);
        }
        printf("%c", (char) 196);
    }

    printf("%c\n", (char) 180);

    bod.Y++;
    SetConsoleCursorPosition(hConsole, bod);

    printf("%c", (char) 179);
    SetConsoleTextAttribute(hConsole, farba2);
    printf(" Meno     ");     //////////
    SetConsoleTextAttribute(hConsole, farba1);
    printf("%c", (char) 179);

    int temp_dlzka;

    temp_dlzka = naj_dlzka - d_meno;
    for (int i = 0; i < temp_dlzka; i++) {
        printf(" ");
    }
    SetConsoleTextAttribute(hConsole, farba2);
    printf(" %s ", meno);     /////////
    SetConsoleTextAttribute(hConsole, farba1);
    printf("%c\n", (char) 179);

    ///////////////////////// RIADOK VYSKA /////////////////////////
    bod.Y++;
    SetConsoleCursorPosition(hConsole, bod);

    printf("%c", (char) 195);

    for (int i = 0; i < (sirkaT + (sizeof(zaznam)/sizeof(zaznam[0]) - 1) + 6); i++){
        if (i == 10){
            printf("%c", (char) 197);
        }
        printf("%c", (char) 196);
    }

    printf("%c\n", (char) 180);

    bod.Y++;
    SetConsoleCursorPosition(hConsole, bod);

    printf("%c", (char) 179);
    SetConsoleTextAttribute(hConsole, farba2);
    printf(" Vyska    ");     //////////
    SetConsoleTextAttribute(hConsole, farba1);
    printf("%c", (char) 179);

    temp_dlzka = naj_dlzka - d_vyska;
    for (int i = 0; i < temp_dlzka; i++) {
        printf(" ");
    }
    SetConsoleTextAttribute(hConsole, farba2);
    printf(" %s ", vyska);      //////////
    SetConsoleTextAttribute(hConsole, farba1);
    printf("%c\n", (char) 179);

    ///////////////////////// RIADOK HMOTNOST /////////////////////////
    bod.Y++;
    SetConsoleCursorPosition(hConsole, bod);

    printf("%c", (char) 195);

    for (int i = 0; i < (sirkaT + (sizeof(zaznam)/sizeof(zaznam[0]) - 1) + 6); i++){
        if (i == 10){
            printf("%c", (char) 197);
        }
        printf("%c", (char) 196);
    }

    printf("%c\n", (char) 180);

    bod.Y++;
    SetConsoleCursorPosition(hConsole, bod);

    printf("%c", (char) 179);
    SetConsoleTextAttribute(hConsole, farba2);
    printf(" Hmotnost ");     //////////
    SetConsoleTextAttribute(hConsole, farba1);
    printf("%c", (char) 179);

    temp_dlzka = naj_dlzka - d_hmotnost;
    for (int i = 0; i < temp_dlzka; i++) {
        printf(" ");
    }
    SetConsoleTextAttribute(hConsole, farba2);
    printf(" %s ", hmotnost);      //////////
    SetConsoleTextAttribute(hConsole, farba1);
    printf("%c\n", (char) 179);

    ///////////////////////// RIADOK TEL /////////////////////////

    bod.Y++;
    SetConsoleCursorPosition(hConsole, bod);

    printf("%c", (char) 195);

    for (int i = 0; i < (sirkaT + (sizeof(zaznam)/sizeof(zaznam[0]) - 1) + 6); i++){
        if (i == 10){
            printf("%c", (char) 197);
        }
        printf("%c", (char) 196);
    }

    printf("%c\n", (char) 180);

    bod.Y++;
    SetConsoleCursorPosition(hConsole, bod);

    printf("%c", (char) 179);
    SetConsoleTextAttribute(hConsole, farba2);
    printf(" Tel.     ");     //////////
    SetConsoleTextAttribute(hConsole, farba1);
    printf("%c", (char) 179);

    temp_dlzka = naj_dlzka - d_tel;
    for (int i = 0; i < temp_dlzka; i++) {
        printf(" ");
    }
    SetConsoleTextAttribute(hConsole, farba2);
    printf(" %s ", tel);      //////////
    SetConsoleTextAttribute(hConsole, farba1);
    printf("%c\n", (char) 179);

    ///////////////////////// ZAKONCENIE /////////////////////////
    bod.Y++;
    SetConsoleCursorPosition(hConsole, bod);

    printf("%c", (char) 192);

    for (int i = 0; i < (sirkaT + (sizeof(zaznam)/sizeof(zaznam[0]) - 1) + 6); i++){
        if (i == 10){
            printf("%c", (char) 193);
        }
        printf("%c", (char) 196);
    }

    printf("%c\n", (char) 217);

    return 0;

}
