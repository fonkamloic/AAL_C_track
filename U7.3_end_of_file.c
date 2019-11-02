#include <stdio.h>

int main(void){
    int clas = 0, count = 0;
    FILE *file = fopen("gradeComparison.txt", "r");
    if(file == NULL){
        return 1;
    }
    float score, myclass;
    fscanf(file, "%f", &myclass);
    while(fscanf(file, "%f", &score) != EOF){
    //    count++;
        if(score > myclass){
            clas++;
        }
    }
    if(clas == 0){
        printf("Yes\n");
    }
    else
        printf("No %d\n", clas);

    fclose(file);
    return 0;
}
