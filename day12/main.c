#include <stdio.h>

typedef int (*BinaryOperation)(int, int);

static int add(int a, int b) { return a + b; }
static int multiply(int a, int b) { return a * b; }

int main(void)
{
    BinaryOperation operations[] = {add, multiply};
    const char *names[] = {"add", "multiply"};
    for (int i = 0; i < 2; ++i) {
        printf("%s: %d\n", names[i], operations[i](6, 7));
    }
    return 0;
}
