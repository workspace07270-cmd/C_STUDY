#include <stdio.h>

int main(void)
{
    int left = 0;
    int right = 0;
    printf("Two integers: ");
    if (scanf("%d %d", &left, &right) != 2) {
        fprintf(stderr, "Invalid input.\n");
        return 1;
    }
    printf("+ %d\n- %d\n* %d\n", left + right, left - right, left * right);
    if (right != 0) {
        printf("/ %d\n%% %d\n", left / right, left % right);
    } else {
        puts("Division by zero is not allowed.");
    }
    return 0;
}
