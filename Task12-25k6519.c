
#include <stdio.h>

int main() {
    int totalSeats = 40;
    int bookedSeats = 0;
    int choice;

    while (bookedSeats < totalSeats) {
        printf("Do you want to book a seat? (1 = Yes, 0 = No): ");
        scanf("%d", &choice);

        if (choice == 0) {
            break; }

        if (bookedSeats < totalSeats) {
            bookedSeats++;
            printf("Seat booked successfully. Remaining seats: %d\n", totalSeats - bookedSeats);
        } else {
            printf("All seats are booked. No more reservations can be made.\n");
            break; 
        }
    }

    printf("Reservation process ended. Total booked seats: %d\n", bookedSeats);
    return 0;

}
