#include <stdio.h>
#include <math.h>
#include <math.h>

int main (){
    int num, i, is_prime=1;

    printf("Enter a number to to test: ");
    scanf("%d", &num);

    for (i=2; i<=num/2; i++)
    {
        if(num%i==0)
        {
            is_prime=0;
        }
    }

    if(is_prime=1)
        printf("Prime number. The factors are: ");
    else
        printf("Composite number. ");

    for (i=2; i<=num/2; i++)
    {
        if(num%i==0)
        {
            printf("%d ", i);
        }
    }

    return 0;
}
