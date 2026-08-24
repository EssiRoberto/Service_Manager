#include <stdio.h>
#include <unistd.h>

int main(void) {
    pid_t pid = fork();

    if (pid == 0) {
        printf("This is the child process!\n");	    
    }else if (pid > 0) {
	printf("This is the parent! Child PID is %d\n", pid);    
    }

    return 0;
}
