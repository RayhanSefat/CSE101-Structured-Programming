#include <stdio.h>

void main (){
    short int i;  //signed short integer
    unsigned short int u;

    u = 33000;
    i = u;
    printf("%hd %hu", i, u);

    return 0;
}
