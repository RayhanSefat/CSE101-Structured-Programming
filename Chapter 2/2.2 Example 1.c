#include <stdio.h>
#include <math.h>
#include <math.h>

int main (){
    int num;

    printf("Enter the integer: ");
    scanf("%d", &num);

    if(num<0)
        printf("Number is negative.");
    else
        printf("Number is non-negative.");

    return 0;
}
