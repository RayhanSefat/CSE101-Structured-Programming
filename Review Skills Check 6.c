#include <stdio.h>

void main (){
    int choice=0;
    float input;

    printf("Convert\n 1. feet to meters\n 2. meters to feet\n 3. ounces to pounds\n 4. pounds to ounces\n 5. Quit\nEnter the number of your choice");

    for(;choice<5;)
    {
        scanf("%d", &choice);
        if (choice==5) break;
        printf ("Enter your input: ");
        scanf("%f", &input);


        switch (choice)
        {
        case 1:
            printf ("Result= %f", input*0.3048);
            break;

        case 2:
            printf ("Result= %f", input/0.3048);
            break;

        case 3:
            printf ("Result= %f", input*0.0625);
            break;

        case 4:
            printf ("Result= %f", input/0.0625);
            break;
        }
        printf("\nEnter choice again: ");
    }


    return 0;
}
