#include <stdio.h>


int main(void){
    FILE *file = fopen("studentGrades.txt", "r");
    if(file == NULL){
        printf("Sorry file could not be found or open. Aborting...\n");
        return 1;
    }
    int num, i, sum =  0, score;
    fscanf(file, "%d", &num);

    for(i = 0; i < num ; i++){
        fscanf(file, "%d", &score);
        sum += score;
    }

    printf("%.2f\n", (float)sum / num);

    fclose(file);
    return 0;
}
