#include<stdio.h>

int main(void){
    char choice;
    int num, i;
    double value;

    scanf("%d", &num);
    if(num < 0){
        return 1;
    }
    for(i = 0; i < num; i++){
        scanf("%lf %c", &value, &choice);
        switch(choice){
            case 'm':
                printf("%.6lf ft\n", value * 3.2808);
            break;
            case 'g':
                printf("%.6lf lbs\n", value * 0.002205);
                break;
            case 'c':
                printf("%.6lf f\n", 32 + (value * 1.8));
                break;
            }
    }

    return 0;
}
