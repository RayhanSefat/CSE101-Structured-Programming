#include<stdio.h>

int main()

{
    char str[80], *p;

    printf("enter a string: ");

    gets(str);

    p=str;
    while(*p && *p!='')
    p++;

    printf(p);

    return 0;
}
