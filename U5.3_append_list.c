#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
      char name[50];
      int age;
      struct student *next;
};

struct student *createStudent(char studentName[], int studentAge);
struct student *append(struct student * end, struct student * newStudptr);
/* add other prototypes here if needed */

int main(void) {
    struct student *start, *newStudptr, *end, *tmp;
    int ageP, ageR, ageM;

    scanf("%d %d %d", &ageP, &ageR, &ageM);
    start = createStudent("Petra", ageP);
    end = start;
    newStudptr = createStudent("Remi", ageR);
    end = append(end, newStudptr);
    newStudptr = createStudent("Mike", ageM);
    end = append(end, newStudptr);

    printf("%s is %d years old.\n", start->name, start->age);
    printf("%s is %d years old.\n", start->next->name, start->next->age);
    printf("%s is %d years old.\n", start->next->next->name, start->next->next->age);

    tmp = start->next;
    free(start);
    start = tmp;
    tmp = start->next;
    free(start);
    free(tmp);

    return 0;
}



struct student *createStudent(char studentName[], int studentAge){
    struct student *new_student = (struct student*)malloc(sizeof(struct student));
    if(new_student == NULL){
        return NULL;
    }
    strncpy(new_student->name, studentName, sizeof(new_student->name));
    new_student->age = studentAge;
    new_student->next = NULL;
    return new_student ;
}

struct student *append(struct student *end, struct student *newStudptr){
    struct student *tmp = end;
    while(tmp->next != NULL){
        tmp = tmp->next;
    }
    tmp->next = newStudptr;
    return tmp;
}


