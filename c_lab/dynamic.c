#include <stdio.h>
#include <stdlib.h>

int main() {
    // 1. malloc
    int *m = (int*) malloc(3 * sizeof(int));
    if (!m) return 1;
    m[0] = 10; m[1] = 20; m[2] = 30;
    printf("malloc: %d %d %d\n", m[0], m[1], m[2]);

    // 2. calloc
    int *c = (int*) calloc(3, sizeof(int));
    if (!c) return 1;
    printf("calloc: %d %d %d\n", c[0], c[1], c[2]); // initialized to 0

    // 3. realloc
    int *r = (int*) malloc(2 * sizeof(int));
    if (!r) return 1;
    r[0] = 100; r[1] = 200;
    r = (int*) realloc(r, 4 * sizeof(int)); // resizing
    r[2] = 300; r[3] = 400;
    printf("realloc: %d %d %d %d\n", r[0], r[1], r[2], r[3]);

    // 4. free
    free(m);
    free(c);
    free(r);
    printf("All memory freed.\n");

    return 0;
}
