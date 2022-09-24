#include <stdio.h>
#include <string.h>

int main (){
    char ch;

    printf("Enter your message: ");
    ch=getchar();
    while(ch!='\n')
    {
        printf("%c", ch+1);
        getchar();
        ch=getchar();
    }

    return 0;
}
