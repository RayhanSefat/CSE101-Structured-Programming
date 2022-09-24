#include <stdio.h>
#include <string.h>

int main (){
    int a, b;
    char ch;

    printf("Do you want to:\n");
    printf("Add, Subtract, Multiply or Divide?\n");

    do{
        printf("Enter the first letter: ");
        ch = getchar();
    }while(ch!='A' && ch!='S' && ch!='M' && ch!='D');

    printf("Enter the first number: ");
    scanf("%d", &a);\

    printf("Enter the second number: ");
    scanf("%d", &b);

    switch(ch)
    {
        case 'A': printf("%d", a+b);
            break;
        case 'S': printf("%d", a-b);
            break;
        case 'M': printf("%d", a*b);
            break;
        case 'D': if(b!=0) printf("%d", a/b);
    }

    return 0;
}

