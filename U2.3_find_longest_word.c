#include<stdio.h>
#include<stdlib.h>

#define MAX_WORD_LEN 101

int main(void){
    int num;
    char name[MAX_WORD_LEN];
    scanf("%d", &num);
    unsigned count=0;
    int i;
    for(i = 0 ; i<num ; i++){
        scanf("%s", name);

        count = count < strlen(name)? strlen(name): count;
    }
    printf("%u\n", count);

    return 0;
}
