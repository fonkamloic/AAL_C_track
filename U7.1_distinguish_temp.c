#include <stdio.h>

double ftoc(int);
double ctof(int);


int main(void) {

    int usertemp;
    char unit;
    double convertedtemp;

    scanf("%d %c", &usertemp, &unit);
    if (unit=='C'){
        convertedtemp = ctof(usertemp);
        printf("%.1lf F\n", convertedtemp);


    } else if (unit=='F'){
        convertedtemp = ftoc(usertemp);
        printf("%.1lf C\n", convertedtemp);


    }

    return 0;

}

/* Function definitions below are provided for you*/

double ctof(int x){

    return((9.0/5)*x+32);
}

double ftoc(int x){

    return(5.0/9*(x-32));
}
