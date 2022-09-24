#include <stdio.h>
#include <string.h>

int main (){
    char ch;
    float a, b;

    printf("Enter the figure: C or R or T: ");
    ch = getchar();

    if(ch == 'C')
    {
        printf("Enter radius: ");
        scanf("%f", &a);
        printf("Area = %f", 3.1416*a*a);
    }

    if(ch == 'R')
    {
        printf("Enter length & width: ");
        scanf("%f%f", &a, &b);
        printf("Area = %f", a*b);
    }

    if(ch == 'T')
    {
        printf("Enter base & height: ");
        scanf("%f%f", &a, &b);
        printf("Area = %f", 0.5*a*b);
    }

    return 0;
}
