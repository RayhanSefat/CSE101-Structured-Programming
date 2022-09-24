#include<stdio.h>

float getname(void)
{
    float x;
    printf("enter a number: ");
    scanf("%f",&x);
    return x;
}

int main(void)
{
    float i;
    i=getnum();
    printf("%f",i);
    return 0;
}
