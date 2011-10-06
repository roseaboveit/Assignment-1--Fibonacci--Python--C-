#include <stdio.h>

int main(int argc, char* argv)
{
    int fibA, fibB, sum;
    fibA=0;
    fibB=1;
    sum=1;
   
    printf("%d, \n", sum);

    while ( sum<5000 ) {
        sum=fibA+fibB;
        if (sum<5000)
            printf("%d, \n", sum);
        fibA=fibB;
        fibB=sum;
    }
}		
