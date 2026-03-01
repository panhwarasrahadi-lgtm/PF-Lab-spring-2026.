// 12. Bus Seat Reservation Monitoring System (While Loop – Conditional Termination & Logical Control)
// A bus has 40 seats available. Passengers arrive one by one to reserve a seat.
// The system should:
// •	Allow seat booking until either:
// o	All 40 seats are booked, OR
// o	The operator enters 0 to stop reservations early.
// •	After each booking, display the number of remaining seats.
// •	Prevent booking if seats are already full.
// Write a C program using a while loop to manage this reservation process and ensure proper condition control.
#include <stdio.h>

int main() {
    int totalSeats = 40;
    int bookedSeats = 0;
    int choice;

    while (bookedSeats < totalSeats) {
        printf("Do you want to book a seat? (1 = Yes, 0 = No): ");
        scanf("%d", &choice);

        if (choice == 0) {
            break; // Exit the loop if the operator chooses to stop reservations
        }

        if (bookedSeats < totalSeats) {
            bookedSeats++;
            printf("Seat booked successfully. Remaining seats: %d\n", totalSeats - bookedSeats);
        } else {
            printf("All seats are booked. No more reservations can be made.\n");
            break; // Exit the loop if all seats are booked
        }
    }

    printf("Reservation process ended. Total booked seats: %d\n", bookedSeats);
    return 0;
}