#include <stddef.h>
#include <stdio.h>

static int sum_array(const int *values, size_t count)
{
    int sum = 0;
    for (const int *p = values; p < values + count; ++p) {
        sum += *p;
    }
    return sum;
}

int main(void)
{
    const int values[] = {3, 1, 4, 1, 5};
    const size_t count = sizeof values / sizeof values[0];
    printf("sum=%d\n", sum_array(values, count));
    return 0;
}
