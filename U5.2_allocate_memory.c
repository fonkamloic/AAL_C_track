#include <stdio.h>
#include <stdlib.h>

struct point{
	int x;
	int y;
};

void printPoint(struct point);
void printPoly(struct point *, int);
void initializePoly(struct point *, int);

int main(void) {
    int num_point;
    scanf("%d", &num_point);

    if(num_point < 0){
        return 1;
    }
    struct point* newPoint = (struct point*)malloc(sizeof(struct point) * num_point);
    if(newPoint == NULL){
        printf("Memory couldn't be allocated :(\n");
        return 2;
    }
    initializePoly(newPoint, num_point);
    printPoly(newPoint, num_point);

    free(newPoint);
    return 0;
}

void printPoint(struct point pt) {
    printf("(%d, %d)\n", pt.x, pt.y);
}

void printPoly(struct point *ptr, int N) {
    int i;
    for (i=0; i<N; i++) {
        printPoint(ptr[i]);
    }
}

void initializePoly(struct point *points, int num){
    int i;
    for(i = 0 ; i < num ; i++){
        (points + i)->x = -i;
        (points + i)->y = i * i;
    }
}

