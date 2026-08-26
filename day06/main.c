#include <stdio.h>

static int maximum(int a, int b)
{
    return a > b ? a : b;
}

static int absolute_value(int value)
{
    return value < 0 ? -value : value;
}

int main(void)
{
    int a = 0;
    int b = 0;
    if (scanf("%d %d", &a, &b) != 2) {
        return 1;
    }
    printf("max=%d, |a-b|=%d\n", maximum(a, b), absolute_value(a - b));
    return 0;
}
