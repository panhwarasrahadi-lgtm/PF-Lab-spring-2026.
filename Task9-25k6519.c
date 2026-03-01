// 9. Factory Production Planning System (For Loop – Logical Iteration & Multiplicative Growth)
// A factory produces customized gift boxes. The manager receives an order to produce N boxes, where each box requires the number of decorative items equal to its box number.
// For example:
// •	Box 1 requires 1 decorative item
// •	Box 2 requires 2 decorative items
// •	Box 3 requires 3 decorative items
// … and so on until Box N
// Write a C program that:
// •	Takes the number of boxes N as input
// •	Uses a for loop to calculate the total number of decorative items required
// •	Displays the final total
#include <stdio.h>

int main() {
    int N;
    int total_decorative_items = 0;

    // Take the number of boxes as input
    printf("Enter the number of boxes (N): ");
    scanf("%d", &N);

    // Use a for loop to calculate the total number of decorative items required
    for (int i = 1; i <= N; i++) {
        total_decorative_items += i; // Each box requires 'i' decorative items
    }

    // Display the final total
    printf("Total number of decorative items required: %d\n", total_decorative_items);

    return 0;
}