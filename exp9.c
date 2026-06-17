#include <stdio.h>
#include <sys/shm.h>

int main() {
    int id = shmget(1234, 1024, 0666 | IPC_CREAT);
    char *ptr = (char *)shmat(id, NULL, 0);

    printf("Enter message: ");
    scanf("%s", ptr);

    printf("Message: %s\n", ptr);

    shmdt(ptr);

    return 0;
}