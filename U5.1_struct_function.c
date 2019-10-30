#include <stdio.h>

struct date {
        int year;
        int month;
        int day;
    };

void readDate(struct date *);
void printDate(struct date);

int main(void) {
	struct date today;
	readDate(&today);
	printDate(today);
	return 0;
}

void readDate(struct date *n){
    scanf("%d %d %d", &n->year, &n->month, &n->day);
}

void printDate(struct date n){
    printf("%.2d/%.2d/%d\n", n.month, n.day, n.year);
}


