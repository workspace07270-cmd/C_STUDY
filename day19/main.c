#include <stdio.h>

typedef struct {
    int id;
    double score;
} Record;

int main(void)
{
    const char *path = "day19_records.bin";
    const Record output[] = {{1, 91.5}, {2, 87.0}};
    FILE *file = fopen(path, "wb");
    if (file == NULL) {
        perror("open");
        return 1;
    }
    size_t count = sizeof output / sizeof output[0];
    if (fwrite(output, sizeof output[0], count, file) != count) {
        perror("write");
        fclose(file);
        return 1;
    }
    fclose(file);

    Record input[2];
    file = fopen(path, "rb");
    if (file == NULL) return 1;
    if (fread(input, sizeof input[0], count, file) != count) {
        fprintf(stderr, "Incomplete record file.\n");
        fclose(file);
        return 1;
    }
    fclose(file);
    for (size_t i = 0; i < count; ++i) {
        printf("id=%d score=%.1f\n", input[i].id, input[i].score);
    }
    return 0;
}
