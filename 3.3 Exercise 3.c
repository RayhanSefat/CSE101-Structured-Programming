#include <stdio.h>
#include <string.h>

int main (){
    int i;

    for(i=1; i<=1000; i=2*i)
        printf("%d ", i);

    return 0;
}
