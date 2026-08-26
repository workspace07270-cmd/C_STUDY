#include <stdio.h>

int main(void)
{
    int value = 42;
    int *pointer = &value;
    printf("value=%d\n", value);
    printf("address=%p\n", (void *)&value);
    printf("through pointer=%d\n", *pointer);
    *pointer = 100;
    printf("changed value=%d\n", value);
    return 0;
}
