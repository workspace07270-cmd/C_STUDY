#include <stdio.h>

#define STUDENTS 3
#define SUBJECTS 3

int main(void)
{
    const int scores[STUDENTS][SUBJECTS] = {
        {90, 85, 88}, {76, 92, 81}, {100, 95, 90}
    };
    for (int row = 0; row < STUDENTS; ++row) {
        int sum = 0;
        for (int col = 0; col < SUBJECTS; ++col) {
            sum += scores[row][col];
        }
        printf("student %d: %.2f\n", row + 1, (double)sum / SUBJECTS);
    }
    return 0;
}
