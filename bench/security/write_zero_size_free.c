#include <stdlib.h>
#include <stdio.h>

int main() {
    char *p = malloc(0);
    if (!p) {
        return 1;
    }
    *p = 'A';
    free(p);

    puts("NOT_CAUGHT");
    fflush(stdout);
    return 0;
}