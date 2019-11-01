#include <stdio.h>


int main(void){
    printf("gcc -std=c11 -Wall -fmax-errors=10 -Wextra -c libimage.c -o libimage.so");
    printf("gcc -std=c11 -Wall -fmax-errors=10 -Wextra -limage superimage.c -o superimage\n");
    return 0;
}

