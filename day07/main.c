#include <stdio.h>

#define VALUE_COUNT 5

int main(void)
{
    int values[VALUE_COUNT] = {0};
    int min = 0;
    int max = 0;
    long sum = 0;
    for (int i = 0; i < VALUE_COUNT; ++i) {
        if (scanf("%d", &values[i]) != 1) {
            return 1;
        }
        if (i == 0 || values[i] < min) min = values[i];
        if (i == 0 || values[i] > max) max = values[i];
        sum += values[i];
    }
    printf("min=%d max=%d average=%.2f\n", min, max, (double)sum / VALUE_COUNT);
    return 0;
}
