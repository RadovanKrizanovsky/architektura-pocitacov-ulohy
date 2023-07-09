#include <stdio.h>

int main() {


    char riadok[200];
    FILE  * text;
    text = fopen("C:\\Users\\rakri\\Desktop\\Stu\\Predmety\\2.semester\\API\\Api ulohy\\BLOK 2\\Uloha2.3.1\\text.html", "r");
    FILE  * new;
    new = fopen("C:\\Users\\rakri\\Desktop\\Stu\\Predmety\\2.semester\\API\\Api ulohy\\BLOK 2\\Uloha2.3.1\\new.html", "a");


    while(!feof(text)){
        fgets(riadok, 200, text);
        int i = 0;
        while(riadok[i] != NULL){

            //ĽŠŤŽ ľšťž  ISO-8859-2  to  Windows-1250
            if(riadok[i] == (char) 165){
                riadok[i] = (char) 188;
            }
            else if(riadok[i] == (char) 169){
                riadok[i] = (char) 138;
            }
            else if(riadok[i] == (char) 171){
                riadok[i] = (char) 141;
            }
            else if(riadok[i] == (char) 174){
                riadok[i] = (char) 142;
            }
            else if(riadok[i] == (char) 181){
                riadok[i] = (char) 190;
            }
            else if(riadok[i] == (char) 185){
                riadok[i] = (char) 154;
            }
            else if(riadok[i] == (char) 187){
                riadok[i] = (char) 157;
            }
            else if(riadok[i] == (char) 190){
                riadok[i] = (char) 158;
            }

            i++;
        }

        fprintf(new, riadok);
    }

    fclose(text);
    fclose(new);

    return 0;
}
