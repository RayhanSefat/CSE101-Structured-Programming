#include <stdio.h>
#include <string.h>

int main (){
    char ch;

    do
    {
        ch= getchar();
        getchar();
        printf("%c", ch-32);
    }while(ch!='\n');

    return 0;
}

