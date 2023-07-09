#include <stdio.h>

int main() {


    char riadok[200];
    FILE  * text;
    text = fopen("C:\\Users\\rakri\\Desktop\\Stu\\Predmety\\2.semester\\API\\Api ulohy\\BLOK 2\\Uloha2.3.2\\text.html", "rb");
    FILE  * new;
    new = fopen("C:\\Users\\rakri\\Desktop\\Stu\\Predmety\\2.semester\\API\\Api ulohy\\BLOK 2\\Uloha2.3.2\\new.html", "a");


    while(!feof(text)){
        fgets(riadok, 200, text);
        int i = 0;
        while(riadok[i] != NULL){

            riadok[i] = riadok[i] ^ (char) 27;

            i++;
        }

        fprintf(new, riadok);
    }

    fclose(text);
    fclose(new);

    return 0;
}
