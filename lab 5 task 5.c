#include <stdio.h>

int main() {
    float salary, incentive;
    int serviceYears;

    printf("Enter salary: ");
    scanf("%f", &salary);

    printf("Enter years of service: ");
    scanf("%d", &serviceYears);

    incentive = (serviceYears > 15) ? (0.35 * salary) :
                (serviceYears > 7)  ? (0.20 * salary) :
                                      (0.05 * salary);

    printf("Incentive Amount = %.2f\n", incentive);

    return 0;
}
