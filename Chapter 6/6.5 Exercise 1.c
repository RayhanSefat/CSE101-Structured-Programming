#include<stdio.h>
#include<string.h>

int main()
{
    char *p[3]={
    "yes","no",
    "maybe-rephrase the question"
    };

    char str[80];

    printf("enter your question: \n");
    gets(str);

    printf(p[strlen(str)%3]);

    return 0;
}
