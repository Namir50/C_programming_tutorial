
// Program to reallocate the previously
// allocated memory

#include <stdio.h>
#include <stdlib.h>

int main() {
    int* ptr, i, n;

    // allocation memory
    ptr = (int*)malloc(2 * sizeof(int));

    printf("Previous memory: ");
    for (i = 0; i < 2; ++i)
        printf("%p, ", ptr + i);

    // reallocating memory
    ptr = realloc(ptr, 3 * sizeof(int));

    printf("\nCurrent memory: ");
    for (i = 0; i < 3; ++i)
        printf("%p, ", ptr + i);

    // freeing memory
    free(ptr);

    return 0;
}