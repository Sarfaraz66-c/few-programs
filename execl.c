#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
    printf("Hello from execl.c\n");
    if (argc > 1) {
        execl("/bin/ls", "ls",  NULL);
        perror("execl");
    }
    return 0;
}

