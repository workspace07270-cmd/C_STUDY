#include <stdio.h>

int main(void)
{
    int score = 0;
    printf("Score (0-100): ");
    if (scanf("%d", &score) != 1 || score < 0 || score > 100) {
        fprintf(stderr, "Score must be between 0 and 100.\n");
        return 1;
    }
    char grade = score >= 90 ? 'A' : score >= 80 ? 'B' :
                 score >= 70 ? 'C' : score >= 60 ? 'D' : 'F';
    printf("Grade: %c\n", grade);
    return 0;
}
