#include <stdio.h>
#include <stdlib.h>
// https://www.youtube.com/watch?v=aiJj4mLS9oI&list=PLLAZ4kZ9dFpMlt_8ZAs3ltQNeVQ9WITia&index=30&ab_channel=GiraffeAcademyd
int main()
{   char line[255];
   FILE *   fpointer = fopen ("employees.txt" , "r");

    fgets(line, 255, fpointer);
    printf("%s",line);


    return 0;
}
