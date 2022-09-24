#include <stdio.h>
#include <string.h>

int main (){
    int a, b;
    char ch;

    printf("Do you want to:\n");
    printf("Add, Subtract, Multiply or Divide?\nEnter the first letter: ");
    ch = getchar();

    printf("Enter the first number: ");
    scanf("%d", &a);\

    printf("Enter the second number: ");
    scanf("%d", &b);

    if(ch=='A') printf("%d", a+b);
    if(ch=='S') printf("%d", a-b);
    if(ch=='M') printf("%d", a*b);
    if(ch=='D' && b!=0) printf("%d", a/b);

    return 0;
}
