#include <stdio.h>
#include <stdlib.h>
// https://www.youtube.com/watch?v=RjwD1jdOHBc&list=PLLAZ4kZ9dFpMlt_8ZAs3ltQNeVQ9WITia&index=27&ab_channel=GiraffeAcademy
int main()
{
    int age = 30;
    int * pAge =&age;
    double gpa =3.4;
    double * pGpa =&gpa;
    char grade ='A';
    char * aGrade =&grade;

    printf("age's memory address: %p\n ", &age);
    return 0;
}
