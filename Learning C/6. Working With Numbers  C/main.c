#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*%d is a placeholder for an integer.
    %f is a placeholder for a floating-point value*/

    int num =6;
    //printf("%f", 8.9 + 45.9); //float poin number
    printf("%d", 8 - 45 );  //decimal int
    printf("\n""%d",   num);
    printf("\n""%f", pow(2,3)); //power


    printf("\n""%f", ceil(362.3990)); //rounding numbers up
    printf("\n""%f", floor(362.3990)); //rounding numbers down

    return 0;
}
