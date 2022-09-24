#include <stdio.h>
#include <stdlib.h>

int main (){
    FILE *fp;
    char ch;

    fp = fopen("Text.txt", "r");

    while((ch = fgetc(fp)) != EOF)
    {
        //fscanf(fp, "%c", &ch);
        printf("%c", ch);
    }

    fclose(fp);

    return 0;
}
