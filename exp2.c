#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main() {
    int src, dest, n;
    char buf[100];

    src = open("source.txt", O_RDONLY);
    dest = open("dest.txt", O_WRONLY | O_CREAT, 0644);

    while ((n = read(src, buf, sizeof(buf))) > 0)
        write(dest, buf, n);

    close(src);
    close(dest);

    printf("File copied successfully.\n");

    return 0;
}