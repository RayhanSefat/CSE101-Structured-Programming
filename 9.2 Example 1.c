#include <stdio.h>
#include <stdlib.h>

int main (){
    char str[80] = "This is a file system test.\n";
    FILE *fp;
    char *p;
    int i;

    if((fp = fopen("Myfile", "w"))==NULL)
    {
        printf("Cannot open file.\n");
        exit(1);
    }

    p = str;
    while(*p)
    {
        if(fputc(*p, fp)==EOF)
        {
            printf("Error writing filr.\n");
            exit(1);
        }
        p++;
    }
    fclose(fp);

    if((fp = fopen("Myfile", "r"))==NULL)
    {
        printf("Cannot open file.\n");
        exit(1);
    }

    for(;;)
    {
        i = fgetc(fp);
        if(i==EOF) break;
        putchar(fp);
    }
    fclose(fp);

    return 0;
}

