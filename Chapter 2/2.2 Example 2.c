#include <stdio.h>
#include <math.h>
#include <math.h>

int main (){
    int num1, num2;

    printf("Enter the first integer: ");
    scanf("%d", &num1);

    printf("Enter the second integer: ");
    scanf("%d", &num2);

    if(num2==0)
        printf("Cannot devide by zero.");
    else
        printf("Answer is %d.", num1/num2);

    return 0;
}
