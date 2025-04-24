#include <stdio.h>
#include <errno.h>

int main() {
    FILE *fp = fopen("highlevel.txt", "w");
    if (fp == NULL) {
        perror("open");
        return 1;
    }

    printf("File opened successfully using fopen.\n");

    if(fclose(fp) != 0) {
        perror("fclose");
        return 1;
    }

    printf("File closed successfully.\n");
    return 0;
}
