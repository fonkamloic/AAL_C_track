#include <stdio.h>
#include <stdlib.h>

struct student {
      char name[50];
      int age;
      struct student *next;
};

struct student *createStudent(char studentName[], int studentAge);
struct student *append(struct student * end, struct student * newStudptr);
void printStudents(struct student *start);
void freeStudents(struct student *start);
/* add any other prototypes as needed */

int main(void) {
    struct student *start, *newStudptr, *end;
    int ageP, ageR, ageM;

    scanf("%d %d %d", &ageP, &ageR, &ageM);

    start = createStudent("Petra", ageP);
    end = start;
    newStudptr = createStudent("Remi", ageR);
    end = append(end, newStudptr);
    newStudptr = createStudent("Mike", ageM);
    end = append(end, newStudptr);

    printStudents(start);
    freeStudents(start);

    return 0;
}
void freeStudents(struct student *start){
    while(start !=NULL){
        struct student *toDel = start;
        start = start -> next;
        free(toDel);
    }
}

void printStudents(struct student *start){
    while(start != NULL){
        printf("%s is %d years old.\n", start->name, start->age);
        start = start->next;
    }
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


