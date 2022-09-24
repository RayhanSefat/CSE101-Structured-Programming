#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main (){
    float p, r;
    int y;

    printf("Enter the principal amount: ");
    scanf("%f", &p);
    printf("Enter the rate of interest(per cent per year): ");
    scanf("%f", &r);
    r/=100;
    printf("Enter number of years: ");
    scanf("%d", &y);

    while(y>0)
    {
        p *= (1+r);
        y--;
    }

    printf("Net principal amount: %.4f", p);

    return 0;
}
