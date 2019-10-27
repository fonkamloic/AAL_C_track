#include <stdio.h>

#define MAX_NAME_LEN 101
int main(void){
    int num;

    scanf("%d", &num);
    int i;
    char fname[MAX_NAME_LEN], lname[MAX_NAME_LEN];

    if(num < 0 ){
        return 1;
    }
    for(i = 0; i < num; i++){
        scanf("%s %s", fname, lname );
        printf("%s %s\n", lname, fname);
    }

    return 0;
}
