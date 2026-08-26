#include <stdio.h>

int main(void)
{
    int count = 0;
    printf("How many values? ");
    if (scanf("%d", &count) != 1 || count <= 0) {
        fprintf(stderr, "Count must be positive.\n");
        return 1;
    }
    double sum = 0.0;
    for (int i = 0; i < count; ++i) {
        double value = 0.0;
        if (scanf("%lf", &value) != 1) {
            fprintf(stderr, "Invalid value at index %d.\n", i);
            return 1;
        }
        sum += value;
    }
    printf("Average: %.2f\n", sum / count);
    return 0;
}
