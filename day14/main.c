#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    size_t count = 0;
    printf("Count: ");
    if (scanf("%zu", &count) != 1 || count == 0 || count > 1000000) {
        fprintf(stderr, "Invalid count.\n");
        return 1;
    }
    int *values = malloc(count * sizeof *values);
    if (values == NULL) {
        fprintf(stderr, "Allocation failed.\n");
        return 1;
    }
    long long sum = 0;
    for (size_t i = 0; i < count; ++i) {
        if (scanf("%d", &values[i]) != 1) {
            free(values);
            return 1;
        }
        sum += values[i];
    }
    printf("average=%.2f\n", (double)sum / count);
    free(values);
    return 0;
}
