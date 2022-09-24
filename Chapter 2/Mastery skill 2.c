#include <stdio.h>
#include <math.h>
#include <math.h>

int main (){
    int n, i, area=0, h, w;

    printf("Number of rooms: ");
    scanf("%d", &n);

    for(;n>0; n--)
    {
        printf("Length and width: ");
        scanf("%d %d", &h, &w);
        area = area + h*w;
    }

    printf("Area: %d", area);

    return 0;
}
