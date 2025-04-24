#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <errno.h>

int main() {
    int fd = open("example.txt", O_CREAT|O_WRONLY|O_TRUNC, S_IRWXU|S_IRWXG|S_IRWXO);
    if (fd == -1) {
        perror("open");
        return 1;
    }
    printf("File opened successfully with fd: %d\n", fd);

    if (close(fd) == -1) {
        perror("close");
        return 1;
    }
    printf("File closed successfully\n");

    return 0;
}

    
