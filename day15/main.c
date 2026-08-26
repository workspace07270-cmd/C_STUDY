#include <stdio.h>

#define ARRAY_LENGTH(array) (sizeof(array) / sizeof((array)[0]))

static inline int square(int value)
{
    return value * value;
}

int main(void)
{
    const int values[] = {1, 2, 3, 4};
    for (size_t i = 0; i < ARRAY_LENGTH(values); ++i) {
        printf("%d squared = %d\n", values[i], square(values[i]));
    }
    return 0;
}
