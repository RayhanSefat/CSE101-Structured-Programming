#include <stdio.h>
#include <string.h>

int main (){
    int i;
    float dt, as;

    scanf("%d", &i);

    while(i>0)
    {
        printf("Enter the distance and average speed: \n");
        scanf("%f %f", &dt, &as);
        printf("driving time: %f\n", dt/as);
        i++;
    }

    return 0;
}

