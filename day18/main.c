#include <stdio.h>

int main(void)
{
    const char *path = "day18_notes.txt";
    FILE *file = fopen(path, "w");
    if (file == NULL) {
        perror("fopen for write");
        return 1;
    }
    fprintf(file, "C17 file example\nsecond line\n");
    if (fclose(file) == EOF) {
        perror("fclose");
        return 1;
    }
    file = fopen(path, "r");
    if (file == NULL) {
        perror("fopen for read");
        return 1;
    }
    char line[128];
    while (fgets(line, sizeof line, file) != NULL) {
        fputs(line, stdout);
    }
    if (ferror(file)) {
        perror("read");
        fclose(file);
        return 1;
    }
    fclose(file);
    return 0;
}
