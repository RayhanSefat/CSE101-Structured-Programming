#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main (){
    FILE *fp1;
    char ch1[10];

    scanf("%s", ch1);
    fp1 = fopen(ch1, "r");
    if(fp1==NULL)
    {
        printf("Error!");
        exit(1);
    }

    char p[101];

    fgets(p, 100, fp1);
    fclose(fp1);

    int c=0, i;
    for(i=0; p[i]; i++)
    {
        if(p[i]=='A' || p[i]=='a')
            c++;
    }
    printf("%d", c);


    return 0;
}
