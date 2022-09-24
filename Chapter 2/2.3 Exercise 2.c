#include <stdio.h>
#include <math.h>
#include <math.h>

int main (){
    int num1, num2, choice;

    printf("1. Sum, 2. Substract\nEnter choice: ");
    scanf("%d", &choice);

    printf("Enter the first integer: ");
    scanf("%d", &num1);

    printf("Enter the second integer: ");
    scanf("%d", &num2);

    if(choice==1)
        printf("Answer is %d.", num1+num2);
    else if(choice==2)
        printf("Answer is %d.", num1-num2);

    return 0;
}
