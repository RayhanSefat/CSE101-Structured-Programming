#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main (){
    FILE *fp1, *fp2;
    char ch1[10], ch2[10];

    scanf("%s", ch1);
    scanf("%s", ch2);
    fp1 = fopen(ch1, "r");
    fp2 = fopen(ch2, "w");
    char a;

    a = fgetc(fp1);
    while(a!=EOF)
    {
        fputc(a,fp2);
        a = fgetc(fp1);
    }

    fclose(fp1);
    fclose(fp2);

    return 0;
}
