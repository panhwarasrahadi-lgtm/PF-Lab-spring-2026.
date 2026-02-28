#include <stdio.h>

int main() {
    float dataUsed, bill = 0;
    int customerType; 
   
    printf("Enter data used (in GB): ");
    scanf("%f", &dataUsed);

    printf("Enter customer type (1 for Prepaid, 2 for Postpaid): ");
    scanf("%d", &customerType);

    if (dataUsed <= 2) {
        bill = dataUsed * 50;
    }
    else if (dataUsed > 2 && dataUsed <= 10) {
        if (customerType == 1) {
            bill = dataUsed * 40;
        }
        else if (customerType == 2) {
            bill = dataUsed * 35;
        }
        else {
            printf("Invalid customer type\n");
            return 0;
        }
    }
    else { 
        bill = dataUsed * 25;
    }

    printf("Total Mobile Data Bill = Rs. %.2f\n", bill);

    return 0;
}
