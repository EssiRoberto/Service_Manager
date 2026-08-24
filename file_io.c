#include <stdio.h>

int main(void) {
    FILE *file = fopen("/tmp/test.pid", "w");
    if (file) {
        fprintf(file, "1234\n");
        fclose(file);
        printf("Wrote PID to file\n");
    }

    return 0;
}
