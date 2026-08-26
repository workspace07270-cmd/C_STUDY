#include <stdio.h>

static void swap_int(int *left, int *right)
{
    int temporary = *left;
    *left = *right;
    *right = temporary;
}

int main(void)
{
    int a = 10;
    int b = 20;
    printf("before: %d %d\n", a, b);
    swap_int(&a, &b);
    printf("after:  %d %d\n", a, b);
    return 0;
}
