#include <stdio.h>
#include <stddef.h>
#include <cstdalign>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
#include <conio.h>
#include <cstddef>

/*
    Source by CPPReference
    Modified For Learn by RK
    I.D.E : VS2019
*/

int main(void) {
    size_t a = alignof(max_align_t);
    printf("Alignment of max_align_t is %zu (%#zx)\n", a, a);

    void* p = malloc(123);
    printf("The address obtained from malloc(123) is %#" PRIxPTR"\n", (uintptr_t)p);
    free(p);

    _getch();
    return 0;
}