#include <stdio.h>
#include <stdlib.h>

int main()
{ //constants are variables that cant be modified


    int num =5;
    printf("%d\n", num );
    num=8 ;
    printf("%d\n", num );

    const int NUM = 10;    //best practice make them capitalized
    printf("%d\n", NUM );
    //num=8 ;
   // printf("%d\n", NUM );
    printf("%d\n", 90 );  //also considered to be a constant
    return 0;
}
