#include<stdio.h>
#include<string.h>

int main()
{
    char *p,**mp,str[80];

    p=str;
    mp=&p;

    printf("enter your name: ");
    gets(*mp);
    printf("hi is %s",*mp);

    return 0;
}
