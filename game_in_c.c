#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number_to_guess, user_guess, attempts = 0;
    srand(time(NULL));
    number_to_guess = rand() % 100 + 1; // Generate a random number between 1 and 100

    printf("Welcome to the Number Guessing Game!\n");
    
    while (1) {
        printf("Guess the number (1-100): ");
        scanf("%d", &user_guess);
        attempts++;

        if (user_guess == number_to_guess) {
            printf("Congratulations! You guessed the correct number %d in %d attempts.\n", number_to_guess, attempts);
            break;
        } else if (user_guess < number_to_guess) {
            printf("Try a higher number.\n");
        } else {
            printf("Try a lower number.\n");
        }
    }

    return 0;
}
