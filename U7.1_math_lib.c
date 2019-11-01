#include <stdio.h>
#include <math.h>

int main(void){
    int input;
    scanf("%d", &input);
    if(input < 0){
        return 1;
    }
    printf("%.8lf\n", pow(input, .5));
    printf("%.10lf\n", exp(1));
    printf("gcc -std=c11 -Wall -fmax-errors=10 -Wextra -lm program.c -o program\n");
    return 0;
}
