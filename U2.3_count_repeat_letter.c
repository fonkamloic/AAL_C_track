#include<stdio.h>
#include<string.h>
#include<ctype.h>


#define ALPHABET_LEN 26
#define WORD_LEN 51

int main(void){
    int memory[ALPHABET_LEN] = {0};
    char word[WORD_LEN];
    unsigned count = 0;
    scanf("%s", word);
    int i, word_len = strlen(word);
    for(i = 0; i < word_len; i++ ){
        memory[tolower(word[i]) - 'a'] += 1;
    }
    for(i = 0; i < ALPHABET_LEN; i++){
        if(memory[i] >1){
            count++;
        }
    }
    printf("%u\n", count);

    return 0;
}
