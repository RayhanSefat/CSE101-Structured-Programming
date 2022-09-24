#include <stdio.h>
#include <math.h>
#include <math.h>

int main (){
    int i;

    for(i=1; i<=100; i++)
    {
        printf("%d\t", i);

        if (i%5==0)
            printf("\n");
    }

    return 0;
}
