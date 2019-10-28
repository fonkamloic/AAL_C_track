#include<stdio.h>
#include<limits.h>

int min(void);

int main(void){

    printf("%d\n", min());
    return 0;
}

int min(){
    int num, i;
    int mi = INT_MAX, value;

    scanf("%d", &num);
    if(num < 0){
        return 1;
    }
    for(i = 0; i < num; i++){
        scanf("%d", &value);
        mi = mi > value ? value : mi;
    }
    return mi;

}
