#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main (){
    FILE *fp;
    char ch[80], c, count;
    int i;

    fp = fopen("Text.txt", "r");

    fgets(ch, 80, fp);

    for(c='A'; c<='Z'; c++)
    {
        count = 0;
        for(i=0; ch[i]; i++)
        {
            if(ch[i]==c || ch[i]==c+32)
            {
                count++;
            }
        }

        printf("%d %c's found!\n", count, c);
    }

    fclose(fp);

    return 0;
}

