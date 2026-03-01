//8. Number Guessing Game (While Loop – Control Flow Management) Create a number guessing game where the correct number is 7. The user keeps entering guesses until they guess the correct number. Use a while loop and display appropriate messages ("Too High", "Too Low", "Correct!").
#include <stdio.h>

int main() {
    int guess, correctNumber = 7;

    printf("Welcome to the Number Guessing Game!\n");
    printf("Guess a number between 1 and 10: ");

    while (1) {
        scanf("%d", &guess);

        if (guess > correctNumber) {
            printf("Too High! Try again.\n");
        } else if (guess < correctNumber) {
            printf("Too Low! Try again.\n");
        } else {
            printf("Correct! You guessed the number %d.\n", correctNumber);
            break;
        }
    }

    return 0;
}