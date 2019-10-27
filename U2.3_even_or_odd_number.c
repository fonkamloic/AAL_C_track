#include<stdio.h>

#define NAME_LEN 51

int main(void){
    char name[NAME_LEN];

    scanf("%s", name);
    int i;
    unsigned count;
    for(i = 0 ; i < NAME_LEN; i++){
        if(name[i] == '\0')
            break;
        if(i % 2 == 0)
            count = 2;
        else
            count = 1;
    }
    printf("%u\n", count);

    return 0;
}
