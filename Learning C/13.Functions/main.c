#include <stdio.h>
#include <stdlib.h>
// https://www.youtube.com/watch?v=GhsfjfgJY0E&list=PLLAZ4kZ9dFpMlt_8ZAs3ltQNeVQ9WITia&index=16&ab_channel=GiraffeAcademy
int main()
{   printf("Top\n\n");

    sayHi("Mike", 20);
    sayHi("John", 15);
    sayHi("Sammy",18);
    sayHi("Mark", 45);

    printf("\nbottom");
    return 0;
}
void sayHi(char name[],int age){   // char name[] is a paramater
printf("Hello %s\, you are %d\n", name, age);


}
