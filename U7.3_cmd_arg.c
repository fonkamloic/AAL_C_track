#include<stdio.h>
#include<stdlib.h>

int main(int argc, char** argv){
    if(argc == 3){
        int num;
        float price;
        num = atoi(argv[1]), price = atof(argv[2]);
        if(num < 0 || price < 0){
            printf("Invalid inputs\n");
        }
        printf("%d plants for %.2f dollars each cost %.2f dollars\n", num, price, num * price);
    }
    else{
        printf("Invalid input.\n");
    }
    return 0;
}
