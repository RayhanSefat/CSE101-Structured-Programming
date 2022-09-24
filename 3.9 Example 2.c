#include <stdio.h>
#include <string.h>

int main (){
    char ch;

    do
    {
        printf\("\nEnter the character, q to quit: ");
        ch = getchar();
        getchar();
        printf("\n");

        switch
        {
        case 'a':
            printf("Now is ");
        case 'b':
            printf("the time ");
        case 'c':
            printf("for all good men. ");
        case 'd':
            printf("The summer ");
        case 'e':
            printf("soldier. ");
        }
    }

    return 0;
}

