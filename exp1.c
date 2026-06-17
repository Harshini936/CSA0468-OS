#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
int main() {
    pid_t pid;
    pid = fork();   // Create a new process
    if (pid < 0) {
        // Error in process creation
        printf("Process creation failed\n");
    }
    else if (pid == 0) {
        // Child process
        printf("\nChild Process\n");
        printf("Child PID  : %d\n", getpid());
        printf("Parent PID : %d\n", getppid());
    }
    else {
        // Parent process
        printf("\nParent Process\n");
        printf("Parent PID : %d\n", getpid());
        printf("Parent's Parent PID : %d\n", getppid());
    }
    return 0;
}