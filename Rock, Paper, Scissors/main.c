#include <stdio.h>
#include <stdlib.h>
#include <time.h>





void rules(char computer, char user) {

    if (computer == user) {
        printf("You draw! What's the chance? Only 1 out of 3.\n");

    }else if(computer == 'r' && user  == 'p'){
        printf("Computer chooses Rock you choose paper\n ");
        printf("You Won? you seem to be good at this ");
    } else if (computer == 'r' && user == 's') {
        printf("Computer chooses Rock you choose scissors\n ");
        printf("You lost! Better luck next time\n");

    } else if (computer == 's' && user == 'p') {
        printf("Computer chooses scissors you choose paper\n ");
        printf("You lost! Better luck next time.\n");
    } else if (computer == 's' && user == 'r') {
        printf("Computer chooses scissors you choose rock\n ");
        printf("You Won! Well done.\n");


    } else if (computer == 'p' && user == 'r') {
        printf("Computer chooses Paper you choose rock\n ");
        printf("You lost! Better luck next time.\n");

    } else if (computer == 'p' && user == 's') {
        printf("Computer chooses Paper you choose Scissors\n ");
        printf("You Won! Well done.\n");


    } else {
        printf("Invalid input.\n");
    }
}




int main()
{

    char user;
    char Quit = 'q';
    char options[] = {'r', 'p', 's'};


    // Seeding the random number generator
    srand(time(NULL));

    while (1){  // infinite loop
        // randomly chooses one of the options from the computer
    char computer = options[rand() % 3];


        printf("\t\t\t\t\tLets play Rock, Paper ,Scissors.\n");
        printf(" \t\t\t\t\tPlease enter one of the following: ");
         printf("\n\t\t\t\t\t\t'r' for Rock. \n\t\t\t\t\t\t'p' for Paper  \n\t\t\t\t\t\t's' for Scissors\n\t\t\t\t\t\t'q' to Quit \n");
            scanf(" %c", &user);




        if (user == 'q') {
            printf("Thank you for playing! \n");
            break;
        }
    rules(computer, user);
    }



    return 0;

}
