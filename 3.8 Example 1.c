#include <stdio.h>
#include <string.h>

int main (){
    int total, i, j;

    total=0;
    do
    {
        printf("Enter the next number(0 to stop): ");
        scanf("%d", &i);
        printf("Enter the number again: ");
        scanf("%d", &j);

        if(i!=j)
        {
            printf("Mismatched\n");
            continue;
        }
        total+=i;
    }while(i);

    printf("Total number is %d", total);

    return 0;
}

