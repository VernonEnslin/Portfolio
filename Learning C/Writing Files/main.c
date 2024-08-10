#include <stdio.h>
#include <stdlib.h>
// https://www.youtube.com/watch?v=TFVJNKax_Bs&list=PLLAZ4kZ9dFpMlt_8ZAs3ltQNeVQ9WITia&index=29&ab_channel=GiraffeAcademy
int main()
{
    FILE *fpointer = fopen("employees.txt","a");// w for write  , a for append
   // fprintf(fpointer, "Jim, Salesman\nPam, Receptionist\nOscar, Accounting");

   fprintf(fpointer, "\nKelly , Cusomer Service");


    fclose(fpointer);

    return 0;
}
