#include <stdio.h>
#include <stdlib.h>

struct student {
      char name[50];
      int age;
      struct student *next;
};

struct student *createStudent(char studentName[], int studentAge);

// Write other function prototypes here (if any)

int main(void) {
    struct student *studptr;
    int myAge;
    char myName[50];
    scanf("%s %d", myName, &myAge);
    studptr = createStudent(myName, myAge);
    printf("New student created: %s is %d years old.\n", studptr->name, studptr->age);
    free(studptr);
    return 0;
}

struct student *createStudent(char studentName[], int studentAge){
    struct student *new_student = (struct student*)malloc(sizeof(struct student));
    if(new_student == NULL){
        return NULL;
    }
    strncpy(new_student->name, studentName, sizeof(new_student->name));
    new_student->age = studentAge;
    return new_student ;
}

