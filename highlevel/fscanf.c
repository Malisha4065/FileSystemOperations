#include <stdio.h>
#include <errno.h>

int main() {
    FILE *fp = fopen("data.txt", "r");
    if (fp == NULL) {
        perror("fopen");
        return 1;
    }

    int id;
    char name[50];
    float marks;

    if (fscanf(fp, "ID: %d\nName: %s\nMarks: %f\n", &id, name, &marks) != 3) {
        perror("fscanf");
        return 1;
    }

    printf("Read from file:\nID: %d\nName: %s\nMarks %.2f\n", id, name, marks);
    fclose(fp);
    return 0; 
}
