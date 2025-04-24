#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <errno.h>

int main() {
    int fd = open("example2.txt", O_CREAT | O_WRONLY, 0666);
    if (fd == -1) {
        perror("open");
        return 1;
    }

    write(fd, "Hello", 5);
    lseek(fd, 10, SEEK_SET); // Move 10 bytes from the beginning
    write(fd, "World", 5);
    close(fd);
    return 0;
}
