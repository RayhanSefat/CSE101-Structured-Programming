#include <stdio.h>

void main (){

    int temp=0;
    int a[5]= {15, 6, 27, 18, 19};

    for(int i=0; i<5; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n");

    //Swapping
    int tool = a[0];  //total=5
    a[0] = a[4];      //a[0]=9
    a[4] = tool;      //a[5]=5

     for(int i=0; i<5; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n");

    //Sorting
    int b[5]= {15, 6, 27, 18, 19};
     for(int i=1; i<5; i++)
        {
            for(int j=0; j<4; j++)
            {
                if (b[j]>b[j+1])
                {
                    int tem = b[j];
                    b[j] = b[j+1];
                    b[j+1] = tem;
                }
            }
        }


     for(int i=0; i<5; i++)
    {
        printf("%d ", b[i]);
    }


    return 0;
}
