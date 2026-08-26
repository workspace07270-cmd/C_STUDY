#include <stdio.h>
#include <stdlib.h>

typedef struct {
    const char *name;
    int score;
} Student;

static int compare_score_desc(const void *left, const void *right)
{
    const Student *a = left;
    const Student *b = right;
    return (b->score > a->score) - (b->score < a->score);
}

int main(void)
{
    Student students[] = {
        {"Min", 82}, {"Kim", 95}, {"Lee", 88}, {"Park", 73}
    };
    const size_t count = sizeof students / sizeof students[0];
    qsort(students, count, sizeof students[0], compare_score_desc);
    for (size_t i = 0; i < count; ++i) {
        printf("%zu. %-8s %d\n", i + 1, students[i].name, students[i].score);
    }
    return 0;
}
