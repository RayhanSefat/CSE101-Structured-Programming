#include <stdio.h>

void main (){
    unsigned u;
    long l;
    short s;

    printf("Enter an unsigned: ");
    scanf("%u", &u);
    printf("Enter an long: ");
    scanf("%ld", &l);
    printf("Enter an short: ");
    scanf("%hd", &s);

    printf("%u %ld %hd", u, l, s);

    return 0;
}
