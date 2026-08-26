#include <stdio.h>

int main(void)
{
    double celsius = 0.0;
    printf("Celsius: ");
    if (scanf("%lf", &celsius) != 1) {
        fprintf(stderr, "Invalid number.\n");
        return 1;
    }
    printf("Fahrenheit: %.2f\n", celsius * 9.0 / 5.0 + 32.0);
    return 0;
}
