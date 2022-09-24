#include <stdio.h>
#include <math.h>
#include <math.h>

int main (){
    int answer;

    printf("What is 10 + 14?\n");
    scanf("%d", &answer);
    if (answer == 10+14)
        printf("Right!");
    else
        printf("Sorry, you are wrong. The answer is 24. ");

    return 0;
}
