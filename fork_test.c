#include <stdio.h>
#include <unistd.h>

int main(void) {
    pid_t pid = fork();
    if (pid == 0) {
        printf("I am the child process\n");	    
    } else if (pid > 0) {
	printf("I am the parent process\n");    
    }

    return 0;
}
