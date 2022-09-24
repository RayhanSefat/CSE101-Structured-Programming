#include <stdio.h>

void main (){
    int i, sum=0, arr[10];

    //insert value from the keyboard into the array
    for (i=0; i<10; i++)
    {
        printf("Enter %d more values: ", 10-i);
        scanf("%d", &arr[i]);
    }

    //print array elements
    printf("You entered: ");

    for (i=0; i<10; i++)
    {
        printf("%d ", arr[i]);
    }

    //calculate the average of the inserted elements
    for (i=0; i<10; i++)
    {
        sum= sum + arr[i];
    }

    printf("\nThe average is %.2f. \n", (float)sum/10);

    printf("\n\n\nSorted inputs: ");


    //sorting the inputs
     for (i=0; i<9; i++)
    {
        for (int j=0; j<(9-i); j++)
        {
            if (arr[j]>arr[j+1])
            {
                sum = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = sum;
            }
        }
    }

    for (i=0; i<10; i++)
    {
        printf("%d ", arr[i]);
    }


    return 0;
}
