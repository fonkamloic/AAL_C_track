#include<stdio.h>

void reverseArray(int *);

int main(void){
    int i, arr[6];

    for(i = 0; i < 6; i++){
        scanf("%d", &arr[i]);
    }
    reverseArray(arr);

    for(i = 0 ; i < 6 ; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

void reverseArray(int *arr){
    int tmp, i, array_size = 6;
    for(i = 0 ; i < 3; i++){
        tmp = arr[array_size - 1];
        arr[array_size -  1] = arr[i];
        arr[i] = tmp;
        array_size--;
    }
}
