#include <stdio.h>
#include <string.h>

int main (){
    char ch;

    for(ch=getchar(); ch!='q'; ch=getchar());
    printf("Found the q.");

    return 0;
}
