#include <stdio.h>

void main (){
        int i;

        for (i=1; i<=10; i++){
            printf("%d ", i);
            if (i==10)
                printf("\n");
        }

        i=1;
        while (i<=10)
        {
            printf("%d ", i);
            if (i==10)
                printf("\n");
                i=i+1;
        }

        i=1;
        do{
             printf("%d ", i);
            if (i==10)
                printf("\n");
                i=i+1;
        }while(i<=10);

        return 0;
}
