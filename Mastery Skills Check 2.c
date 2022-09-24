#include <stdio.h>
#include <string.h>

int main (){
    int i;

    scanf("%d", &i);

    if(i>=0)
    {
        if(i==0)
            printf("Zero");
        else
            printf("Positive number");
    }
    else
        printf("Negative number");

    return 0;
}

