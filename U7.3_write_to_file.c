#include <stdio.h>

int main(void){
    int num;
    scanf("%d", &num);
    FILE *file = fopen("myGrades.txt", "r");
    if(file == NULL){
        return 1;
    }
    int value;
    fseek(file, -3, SEEK_END);   //start reading from the end. jump to the last number. 5 bytes before the end
    fscanf(file, "%d", &value);
	printf("%d\n", value);
    if(value != num){
        file = freopen("myGrades.txt", "a+", file);
        fprintf(file, " %d ", num);
    }
    file = freopen("myGrades.txt", "r", file);
    while(fscanf(file, "%d", &value) != EOF){
        printf("%d ", value);
    }
    printf("\n");


    fclose(file);



    return 0;
}
