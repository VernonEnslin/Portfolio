#include <stdio.h>
#include <stdlib.h>
// https://www.youtube.com/watch?v=v_kHaR6QMIY&list=PLLAZ4kZ9dFpMlt_8ZAs3ltQNeVQ9WITia&index=28&ab_channel=GiraffeAcademy
int main()
{
    int age= 30;
    int *pAge = &age;


    printf("%d", *pAge);
    return 0;
}
