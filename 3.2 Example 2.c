#include <stdio.h>
#include <string.h>

int main (){
    int count, answer, again;

    for(count=1; count<=10; count++)
    {
        printf("What is %d + %d?\n ");
        scanf("%d", &answer);

        if(answer == count + count)
        {
            printf("Right!\n");
        }

        else
        {
            printf("Sorry! You are wrong. Try again,\n");
            printf("What is %d + %d?\n ");
            scanf("%d", &answer);

            if(answer == count + count)
            {
                printf("Right!\n");
            }

            else
                printf("The correct answer is %d+%d?", count+count);
        }


    }

    return 0;
}
