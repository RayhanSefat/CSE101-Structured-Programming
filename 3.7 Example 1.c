#include <stdio.h>
#include <string.h>

int main (){
    int i;
    char ch;

    for(i=1; i<10000; i++)
    {
        if(!(i%6))
        {
            printf("%d, more? (Y/N)", i);
            ch = getchar();
            getchar();
            if(ch=='N') break;
            printf("\n");
        }
    }

    return 0;
}

