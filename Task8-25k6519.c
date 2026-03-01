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
