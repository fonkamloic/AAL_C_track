#include <stdio.h>

void behind(int *, int);

int main(void) {
    int array[10];
    int N, i;

    scanf("%d", &N);
    for (i=0; i<N; i++) {
        scanf("%d", &array[i]);
    }
    behind(array, N);
    for (i=0; i<N; i++) {
        printf("%d\n", array[i]);
    }

    return 0;
}

void behind(int *arr, int num){
    int i, tmp_arr[num], max = -999;
    for(i = 0; i < num; i++){
        tmp_arr[i] = *(arr + i);
        max = max > *(arr+ i) ? max : *(arr + i);
    }
    for(i = 0; i < num; i++){
        *(arr + i) = max - tmp_arr[i];
    }
}

