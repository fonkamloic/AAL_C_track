#include <stdio.h>

struct date {
        int year;
        int month;
        int day;
    };

void printDate(struct date);
void readDate(struct date *);

struct date advanceDay(struct date);

int main(void) {
	struct date today, tomorrow;
	readDate(&today);
	printDate(today);
	tomorrow = advanceDay(today);
	printDate(tomorrow);
	return 0;
}

void readDate(struct date *n){
    scanf("%d %d %d", &n->year, &n->month, &n->day);
}

void printDate(struct date n){
    printf("%.2d/%.2d/%d\n", n.month, n.day, n.year);
}
struct date advanceDay(struct date n){
    switch(n.month){
        case 4:
        case 6:
        case 9:
        case 11:
            n.day = ((n.day + 1) % 31) + 1;
            break;
        case 2:
            n.day = ((n.day + 1) % 30 )+ 1;
            break;
        default:
            n.day = ((n.day + 1) % 32) + 1;
    }
    if ( (n.month + 1) % 13 == 0 ){
       n.month = ((n.month + 1) % 13 )+ 1;
        n.year += 1;
    }else
        n.month = ((n.month + 1) % 13 );


    return n;
}
