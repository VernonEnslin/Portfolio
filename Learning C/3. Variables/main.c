#include <stdio.h>
#include <stdlib.h>

int main()
{
    char characterName[] = "Mark";
    int characterAge  = 56;

    printf("There once was a man named %s  \n", characterName);
    printf("\he was %d old  \n",  characterAge);

    characterAge = 67;
    printf("He really liked the name %s  \n", characterName);
    printf("He did not like being %d  \n", characterAge);

    return 0;
}
