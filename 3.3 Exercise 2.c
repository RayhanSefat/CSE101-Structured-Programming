#include <stdio.h>
#include <string.h>

int main (){
    int i;

    printf("Enter an integer: ");
    scanf("%d", &i);

    for(;i>=0;i--)
        printf("\a");

    return 0;
}
