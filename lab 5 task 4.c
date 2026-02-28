#include <stdio.h>

int main() {
    int category, choice, quantity;
    int price = 0;

    printf("Select Book Category:\n");
    printf("1. Fiction\n");
    printf("2. Non-Fiction\n");
    printf("Enter category: ");
    scanf("%d", &category);

    switch (category) {

        case 1:
            printf("Fiction Books:\n");
            printf("1. Novel (Rs. 600)\n");
            printf("2. Comic (Rs. 300)\n");
            printf("Enter choice: ");
            scanf("%d", &choice);

            switch (choice) {
                case 1:
                    price = 600;
                    printf("Selected Book: Novel\n");
                    break;
                case 2:
                    price = 300;
                    printf("Selected Book: Comic\n");
                    break;
                default:
                    printf("Invalid Fiction Book Choice\n");
                    return 0;
            }
            break;

        case 2:
            printf("Non-Fiction Books:\n");
            printf("1. Biography (Rs. 800)\n");
            printf("2. Self-Help (Rs. 500)\n");
            printf("Enter choice: ");
            scanf("%d", &choice);

            switch (choice) {
                case 1:
                    price = 800;
                    printf("Selected Book: Biography\n");
                    break;
                case 2:
                    price = 500;
                    printf("Selected Book: Self-Help\n");
                    break;
                default:
                    printf("Invalid Non-Fiction Book Choice\n");
                    return 0;
            }
            break;

        default:
            printf("Invalid Book Category\n");
            return 0;
    }

    printf("Enter quantity: ");
    scanf("%d", &quantity);

    printf("Total Bill = Rs. %d\n", price * quantity);

    return 0;
}
