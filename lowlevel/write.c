#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>

int main() {
    int fd = open("example.txt", O_CREAT|O_APPEND|O_WRONLY, S_IRWXU|S_IRWXG|S_IRWXO);
    if (fd == -1) {
        perror("open");
        return 1;
    }

    const char *msg = "Hello, low-level I/O in C!\n";
    ssize_t bytes_written = write(fd, msg, strlen(msg));
    if (bytes_written == -1) {
        perror("write");
        return 1;
    }

    printf("Wrote %zd bytes\n", bytes_written);
    close(fd);
    return 0;
}

