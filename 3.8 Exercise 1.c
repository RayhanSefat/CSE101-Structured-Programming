#include <stdio.h>
#include <string.h>
#include <math.h>

int main (){
    int i;

    for(i=1; i<101; i++)
        if(i%2) printf("%d ", i);

    return 0;
}
