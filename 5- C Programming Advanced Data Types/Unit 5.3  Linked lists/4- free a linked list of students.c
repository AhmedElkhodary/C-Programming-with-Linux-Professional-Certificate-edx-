

// Created by Ahmed_Elkhodary

#include <stdio.h>
#include <stdlib.h>

struct student {
      char name[50];
      int age;
      struct student *next;
};

struct student *createStudent(char studentName[], int studentAge);
void copystr(char *source, char *target);
struct student *append(struct student * end, struct student * newStudptr); 
void printStudents(struct student *start);
void freeStudents(struct student *start);

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
    
    scanf("%d");
    return 0;
}


struct student *createStudent(char studentName[], int studentAge){
	struct student *ptr;
	
	ptr= (struct student *) malloc(sizeof(struct student));
	copystr(studentName, ptr->name);
	ptr->age = studentAge;
	ptr->next = NULL;
	
	return(ptr);
}

void copystr(char *source, char *target){
	int i = 0;
	while(source[i] != '\0'){
		target[i] = source[i];
		i++;
	}
	target[i] = '\0';
}


struct student *append(struct student *end, struct student *newStudptr){
     
	end->next = newStudptr;
	end = newStudptr;
	
	return (end);
	
}

void printStudents(struct student *start){
	struct student *ptr = start;
	
	while( ptr != NULL){
		printf("%s is %d years old.\n", ptr->name, ptr->age);
		ptr = ptr->next;
	}
}
void freeStudents(struct student *start){
	struct student *ptr = start;
	struct student *temp;
	
	while(ptr != NULL){
		temp = ptr->next;
		free(ptr);
		ptr = temp;
	}
}

