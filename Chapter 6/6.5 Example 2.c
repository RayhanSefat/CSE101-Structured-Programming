#include<stdio.h>
#include<string.h>



char*p[][2]={
"red delicious","red",
"golden delicious","yellow",
"winesep","red",
"lodi","green",
"cortland","red",
"mutsu","yellow",
"",""};

int main()
{
    int i;
    char apple[80];

    printf("the name of apple : ");
    gets(apple);

    for(i=0;*p[i][0];i++)
    {
        if(!strcmp(apple,p[i][0]))
        printf("%s is %s\n",apple,p[i][1]);
    }

    return 0;
}

