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
