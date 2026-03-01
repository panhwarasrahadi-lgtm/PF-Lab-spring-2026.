//5. Temperature Monitoring System (While Loop – Dynamic Input Handling) A weather station records temperature readings. The program should continuously accept temperature values until the user enters -999 (sentinel value). Use a while loop to calculate the average temperature of all valid inputs.
#include <stdio.h>

int main() {
    float temperature, sum = 0;
    int count = 0;

    printf("Enter temperature readings (enter -999 to stop):\n");

    while (1) {
        printf("Enter temperature: ");
        scanf("%f", &temperature);

        if (temperature == -999) {
            break;
        }

        sum += temperature;
        count++;
    }

    if (count > 0) {
        float average = sum / count;
        printf("Average temperature: %.2f\n", average);
    } else {
        printf("No valid temperatures entered.\n");
    }

    return 0;
}