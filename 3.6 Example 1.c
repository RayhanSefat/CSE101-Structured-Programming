#include <stdio.h>
#include <string.h>

int main (){
    int count, answer, again, right;

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
            right=0;

            for(int chances=0; chances<3; chances++){
                printf("What is %d + %d?\n ");
                scanf("%d", &answer);

                if(answer == count + count)
                {
                    printf("Right!\n");
                    right=1;
                }
            }

            if(!right)
                printf("The correct answer is %d+%d?", count+count);
        }


    }

    return 0;
}
