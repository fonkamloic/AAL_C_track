#include <stdio.h>



int main(void){
    int num, i;
    scanf("%d", &num);
    if(num < 0)
        return 1;
    int value, total = 0;
    char type;
    for(i = 0; i < num; i++){
        scanf("%d %c", &value, &type);
        switch(type){
            case 'i':
                total += value * 4;
            break;
            case 'c':
                total += value * 1;
            break;
            case 'd':
                total += value * 8;
            break;
            default:
                printf("Invalid tracking code type\n");
                return 2;
        }
    }
    printf("%d bytes", total);


    return 0;
}

