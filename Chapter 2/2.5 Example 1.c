#include <stdio.h>
#include <math.h>
#include <math.h>

int main (){
    int ans, c;

    for(c=1; c<11; c++)
    {
        printf("What is %d + %d?", c, c);
        scanf("%d", &ans);

        if(ans = c + c)
            printf("Right! ");
        else
            printf("Sorry, you are wrong. The answer is %d. ", c+c);
    }

    return 0;
}
