#include <stdio.h>
#include <string.h>

int main (){
    char ch;

    printf("Enter the letter: ");
    ch = getchar;

    switch(ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf(" is a vowel.");
        break;
    default:
        printf(" is a consonant.");
        break;
    }

    return 0;
}

