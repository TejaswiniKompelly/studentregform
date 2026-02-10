#include <stdio.h>
#include <unistd.h>

int main()
{
    int pid;

    pid = fork();

    if (pid > 0)
    {
        printf("Parent process\n");
        printf("Parent PID: %d\n", getpid());
    }
    else if (pid == 0)
    {
        printf("Child process\n");
        printf("Child PID: %d\n", getpid());
    }
    else
    {
        printf("Fork failed\n");
    }

    return 0;
}


