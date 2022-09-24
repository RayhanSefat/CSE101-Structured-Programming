#include<stdio.h>

int main()
{
    int i,*p,**mp;

    p=&i;
    mp=&p;

    **mp=10;

    printf("%p%p%p",&i,p,mp);

    return 0;
}
