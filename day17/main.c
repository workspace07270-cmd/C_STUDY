#include <stdio.h>
#include <string.h>

int main(void)
{
    char line[128];
    printf("Text: ");
    if (fgets(line, sizeof line, stdin) == NULL) {
        return 1;
    }
    line[strcspn(line, "\n")] = '\0';
    size_t letters = 0;
    for (size_t i = 0; line[i] != '\0'; ++i) {
        if (line[i] != ' ') ++letters;
    }
    printf("length=%zu, non-space=%zu\n", strlen(line), letters);
    return 0;
}
