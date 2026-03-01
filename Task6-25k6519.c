//6. Multiplication Table Generator (For Loop – Controlled Iterations) Write a C program that takes a number from the user and prints its multiplication table up to 10 using a for loop.
#include <stdio.h>

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Multiplication table for %d:\n", number);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }

    return 0;
}