
#include <stdio.h>

int main() {
    int N;
    int total_decorative_items = 0;

    printf("Enter the number of boxes (N): ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        total_decorative_items += i; }

    printf("Total number of decorative items required: %d\n", total_decorative_items);

    return 0;

}
