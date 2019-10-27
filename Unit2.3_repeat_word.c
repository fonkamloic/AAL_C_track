#include<stdio.h>

int main(void){
    //number to specify number of repition
    int num;

    //buffer to store word
    char word[101];

    scanf("%d %s", &num, word);

    //check if num is possitive
    if(num < 0){
        return 1;
    }
    int i;
    for(i = 0; i < num; i++){
        printf("%s\n", word);
    }

    return 0;
}
