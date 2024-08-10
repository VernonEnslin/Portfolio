#include <stdio.h>
#include <stdlib.h>
//https://www.youtube.com/watch?v=GBFhRR1hTz0&list=PLLAZ4kZ9dFpMlt_8ZAs3ltQNeVQ9WITia&index=18&ab_channel=GiraffeAcademy

int max(int num1, int num2 , int num3){
    int result;

    if( num1 >= num2 && num1 >= num3){
            result = num1;


    } else if(num2>= num1 && num2 >= num3){
    result = num2;

    } else{
    result = num3;}
    return result;

}
int main()
{
    printf("%f", max (40.5 ,10.5 , 60.5));
    return 0;
}
