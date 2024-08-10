#include <stdio.h>
#include <stdlib.h>

int main()
{   /*
    int age;
    printf("Enter your age:  ");
    scanf(" %d" ,  &age);        // input something into the program
    printf ("You are %d years old", age);
*/
/*
    double gpa;
    printf("Enter your gpa:  ");
    scanf ("%lf", &gpa);
    printf("Your gpa is %f",  gpa);

*/
/*
char grade;
    printf("Enter your grade:  ");
    scanf ("%c", &grade);               //%C stands for character
    printf("Your grade is %c",  grade);

*/
char name[20];
printf("Enter your name:  ");
fgets(name, 20, stdin);        //%s stands for string
printf("your name is %s", name);

    return 0;
}
