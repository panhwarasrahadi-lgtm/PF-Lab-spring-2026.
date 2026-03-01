//7. Menu-Driven Calculator (Do-While Loop – Exit Controlled Loop)
// Design a simple calculator that shows a menu:
// 1.	Addition
// 2.	Subtraction
// 3.	Exit
// The program should continue to display the menu after each operation until the user chooses Exit. Use a do-while loop to implement this behaviour
#include <stdio.h>
int main() {
    int choice;
    float num1, num2;

    do {
        printf("\nMenu:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 3) {
            printf("Exiting the calculator. Goodbye!\n");
            break;
        }

        printf("Enter two numbers: ");
        scanf("%f %f", &num1, &num2);

        switch (choice) {
            case 1:
                printf("Result: %.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
                break;
            case 2:
                printf("Result: %.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 3);

    return 0;
}