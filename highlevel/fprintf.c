#include <stdio.h>
#include <errno.h>

int main() {
    FILE *fp = fopen("data.txt", "w");
    if (fp == NULL) {
        perror("fopen");
        return 1;
    }

    int id = 101;
    const char *name = "Alice";
    float marks = 92.5;

    if (fprintf(fp, "ID: %d\nName: %s\nMarks: %.2f\n", id, name, marks) < 0) {
        perror("fprintf");
        return 1;
        }

    fclose(fp);
    return 0;
}

