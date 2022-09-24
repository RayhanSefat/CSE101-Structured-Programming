#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main (){
    FILE *fp;
    char ch[80];

    fp = fopen("Text.txt", "r");

    fgets(ch, 80, fp);

    fclose(fp);

    fp = fopen("Text1.txt", "w");

    fputs(ch, fp);

    fclose(fp);

    return 0;
}
