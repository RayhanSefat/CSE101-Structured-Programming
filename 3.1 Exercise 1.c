#include <stdio.h>
#include <string.h>

int main (){
    int i;
    char ch, e;

    e = 'z';

    for(i=0; i<10; i++)
    {
        scanf("%c", &ch);
        if(ch<e)
            e=ch;
    }

    printf("%c", e);

    return 0;
}
