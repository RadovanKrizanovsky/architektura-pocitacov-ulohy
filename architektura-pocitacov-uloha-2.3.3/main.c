#include <stdio.h>

int main() {

    char riadok1[200];
    char riadok3[200];
    char riadok4[200];

    FILE  * file1;
    file1 = fopen("C:\\Users\\rakri\\Desktop\\Stu\\Predmety\\2.semester\\API\\Api ulohy\\BLOK 2\\Uloha2.3.3\\file01.txt", "r");
    FILE  * file2;
    file2 = fopen("C:\\Users\\rakri\\Desktop\\Stu\\Predmety\\2.semester\\API\\Api ulohy\\BLOK 2\\Uloha2.3.3\\file02.txt", "a");
    FILE  * file3;
    file3 = fopen("C:\\Users\\rakri\\Desktop\\Stu\\Predmety\\2.semester\\API\\Api ulohy\\BLOK 2\\Uloha2.3.3\\file03.txt", "r");
    FILE  * file4;
    file4 = fopen("C:\\Users\\rakri\\Desktop\\Stu\\Predmety\\2.semester\\API\\Api ulohy\\BLOK 2\\Uloha2.3.3\\file04.txt", "r");

    while(!feof(file4)){
        fgets(riadok1, 200, file1);
        fgets(riadok3, 200, file3);
        fgets(riadok4, 200, file4);
        int i = 0;
        while(riadok1[i] != NULL){

            riadok1[i] = riadok1[i] ^ riadok3[i] ^ riadok4[i];


            if (riadok1[i] == 0x0D || riadok3[i] == 0x0D || riadok4[i] == 0x0D){
                ++i;
                riadok1[i] = riadok1[i] ^ riadok3[i] ^ riadok4[i];
            }

            i++;
        }

        fprintf(file2, riadok1);
    }

    fclose(file1);
    fclose(file2);
    fclose(file3);
    fclose(file4);

    return 0;
}
