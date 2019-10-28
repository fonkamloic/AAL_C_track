#include <stdio.h>

int sumOfDigits(int);

int main(void){
    int digit;
    scanf("%d", &digit);

    printf("%d\n", sumOfDigits(digit));

    return 0;
}

int sumOfDigits(int n){
    int half = n / 10;
    int modulus = n % 10;
    static int sum =0;
    sum += modulus;
    if(modulus == 0) {
        return sum + half;

    }
    else
        return sumOfDigits(half);
}
