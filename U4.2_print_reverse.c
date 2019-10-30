#include<stdio.h>
#include <stdlib.h>
#include<string.h>

#define TEXT_SIZE 68
#define WORD_LEN 41


int main(void){
    char *text_area[TEXT_SIZE];
    int i;
    char *word;
    for(i=0; i < TEXT_SIZE; i++){
        word = (char*)malloc(sizeof(char)* WORD_LEN);
        scanf("%s", word);
        text_area[TEXT_SIZE - 1 - i] = word;
    }
    for(i= 0 ; i < TEXT_SIZE; i++){
        printf("%s ", text_area[i]);
        free(text_area[i]);
    }
    printf("\n");


    return 0;
}
