#include <stdio.h>
#include <math.h>
#include <math.h>

int main (){
    int mn=73673, guess, i=0, m=0;

    for(;i<10;i++)
    {
        printf("Guess %d: ", i+1);
        scanf("%d", &guess);

        if(guess == mn)
        {
            printf("Correct! Congratulations...");
            printf("\nNumber of wrong answers: %d", i);
            break;
        }
        else if (i==9)
        {
            printf("Sorry! 10 wrong answers. Turns over...");
        }
        else if(guess>mn)
            printf("Input Less.\n");
        else
            printf("Input More.\n");
    }

    return 0;
}
