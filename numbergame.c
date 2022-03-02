// Create menu with 3 options
// Set maximum value which can change with option 2
// Save all changes and guesses

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// Creating menu function
void menu() {
    printf("Press '1' to play the game \n" );
    printf("Press '2' to change the max number \n" );
    printf("Press '3' to quit \n" );
}

// Going into main function
int main() {
    // Declaring max value and integers
    int max = 10;
    int number = 0;
    int inp; 
    int random;
    int guesses = 0;

    while(number != 3){
        menu();
        scanf("%d", &number);

        //Option 1: Creates random generator, tells gamer if their guess is too high or too low
        if(number == 1 ){
            srand(time(0));
            random = (rand() %max);

            while(random != inp) {
                printf("Guess a number: ");
                scanf("%d", &inp);
                guesses++ ;

                if(inp > random){
                    printf("Your guess was too high \n");
                }

                else if(inp < random){
                    printf("Your guess was too low \n");
                }

                else if(inp == random){
                    printf("You won!! \n");
                }
            }
        }

        // Option 2: Allows to change max value and saves it. Doesn't allow negative numbers
        else if(number == 2){
            printf("Enter new max value: ");
            scanf("%d", &max);

            while(max < 0){
                printf("Enter new max value: ");
                scanf("%d", &max);
            }
        }

        // Option 3: Thanks them for playing, displays total # of guesses, and ends game
        else if(number == 3){
            printf("Thank you for playing! \n");
            printf("It took you %d guesses to win the game! \n", guesses);

            return 0;

        }

    }

    return 0;
}