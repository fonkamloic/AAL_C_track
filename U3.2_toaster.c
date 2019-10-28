#include <stdio.h>

void printSize(int);

int main(void){
    char type;
    int value;
    scanf("%c %d", &type, &value);
    int total_size = 0;
    switch(type){
        case 'i':
                total_size = value * sizeof(int);
        break;
        case 's':
               total_size = value * sizeof(short);
        break;
        case 'c':
                 total_size = value * sizeof(char);
        break;
        case 'd':
                total_size = value * sizeof(double);
        break;
    }

    printSize(total_size);
    return 0;
}

void printSize(int n){
    int mega =0, kilo =0;
    if(n / 1000000 > 0){
        mega = n / 1000000;
       n -= mega * 1000000;
       printf("%d MB and ", mega);
    }
    if(n / 1000){
        kilo = n / 1000;
        n -= kilo * 1000;
        printf("%d KB and ", kilo);
    }
    printf("%d B\n", n);
}
