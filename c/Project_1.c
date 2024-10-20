#include <stdio.h>
#include <stdlib.h>  // For rand() and srand()
#include <time.h>    // For time()

int main() {
    // Seed the random number generator with the current time
    srand(time(0)); 
    
    // Generate a random number between 1 and 100
    int random_number = (rand() % 100) + 1;
    int no_of_guesses = 0;
    int guessed_number;

    do
    {
        printf("Guess the number");
        scanf("%d", &guessed_number);

        if (guessed_number>random_number){
            printf("Lower number please|\n");
        }
        else if(guessed_number<random_number){
            printf("Higher number please\n");
        }
        else{
            printf("congrates||\n");
        }
        no_of_guesses++;
    }while(guessed_number != random_number);
    printf("You guessed the number in %d guesses", no_of_guesses);

    // Print the random number
    // printf("Random number between 1 and 100: %d\n", random_number);
    

    return 0;
}
