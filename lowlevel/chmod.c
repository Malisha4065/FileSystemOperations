#include <sys/stat.h>
#include <stdio.h>

int main() {
    if (chmod("example2.txt", S_IRUSR|S_IWUSR|S_IRGRP) == -1) {
        perror("chmod");
        return 1;
    }
    printf("Permissions changed.\n");
    return 0;
}

