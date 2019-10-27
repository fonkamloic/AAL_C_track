#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define MAX_LEN 51

int main(void){
    char word[MAX_LEN];
    scanf("%s", word);

    int word_len = strlen(word), mid = word_len % 2 == 0? word_len / 2: (word_len / 2) + 1;
    int i, result = -1;
    for (i = 0; i < word_len; i++){
        if(i < mid && tolower(word[i]) == 't'){
            result = 1;
            break;
        }
        if(i >= mid && tolower(word[i]) == 't'){
            result = 2;
            break;
        }
    }
    printf("%d\n", result);
    return 0;
}
