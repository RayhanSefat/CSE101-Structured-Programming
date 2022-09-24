#include <stdio.h>
#include <string.h>

int main (){
    float l, g;
    char ch;

    do
    {
        printf("Gallons: ");
        scanf("%f", &g);
        l=g/3.7854;
        getchar();
        printf("Liters: %.4f\nPress 'R' to repeat", l);
        ch=getchar();
    }while(ch=='R');

    return 0;
}

