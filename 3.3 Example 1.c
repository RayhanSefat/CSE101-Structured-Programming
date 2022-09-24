#include <stdio.h>
#include <string.h>

int main (){
    int i;
    char ch='a';

    for(i=0; ch!='q'; i++)
    {
        printf("Pass %d\n", i);
        ch=getchar();
        getchar();
    }

    return 0;
}
