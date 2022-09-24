#include<stdio.h>
int get_char();

int main()
{
    char ch;
    ch=get_char();
    printf("%c",ch);
    return 0;
}

int get_char()
{
    return 'a';
}
