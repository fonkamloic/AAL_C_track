#include <stdio.h>

void elixir(int *);

int main(void){
	int age;
	int *ageAddr = &age;
	scanf("%d", ageAddr);
	printf("Your current age is %d.\n", age);

	elixir(ageAddr);

	printf("Your new age will be %d!\n", age);
	return 0;
}

void elixir(int *a){
    if(*a < 21)
        *a *= 2;
    else
        *a -= 10;
}

//Write your function here
