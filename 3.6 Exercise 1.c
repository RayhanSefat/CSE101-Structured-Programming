#include <stdio.h>
#include <string.h>

int main (){
    int i, j, is_prime;

    for(i=2; i<=1000; i++)
    {
        is_prime=1;
        for(j=2; j<=i/2; j++)
        {
            if(i%j==0)
            {
                is_prime=0;
                j=i;
            }
        }
        if(is_prime==1) printf("%d ", i);
    }

    return 0;
}

