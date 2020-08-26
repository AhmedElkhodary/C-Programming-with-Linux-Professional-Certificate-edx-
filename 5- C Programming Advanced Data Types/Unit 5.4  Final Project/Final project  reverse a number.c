// created by Ahmed_Elkhodary
// Final project: reverse a number 

#include<stdio.h>
#include<stdlib.h>


struct digit{
	int num;
	struct digit *next;
};

struct digit * createDigit(int);
struct digit * append(struct digit * end, struct digit * newDigptr);
void printNumber(struct digit *);
void freeNumber(struct digit *);
struct digit *readNumber(void); 
struct digit * reverseNumber(struct digit * );

int main(void){
	struct digit *start, *rstart;
	
	start = readNumber();

    printf("The reverse of ");
    printNumber(start);
    
    rstart = reverseNumber(start);

    printf("to ");
	printNumber(rstart);	 

    freeNumber(start);	
    freeNumber(rstart);	
	
	scanf("%d");
	return 0;
}

struct digit * reverseNumber(struct digit * start){
	struct digit *ptr, *newptr, *front; 
	ptr = start;
	front = NULL;
	
	while(ptr != NULL){
		newptr = createDigit(ptr->num);
		newptr->next = front;
		front = newptr;
		
		ptr = ptr->next;
	}
	return (front);
}



struct digit *createDigit(int dig) {
    struct digit *ptr;
    ptr = (struct digit *) malloc(sizeof(struct digit));
    ptr->num = dig;
    ptr->next = NULL;
    return ptr;
}
struct digit * append(struct digit * end, struct digit * newDigptr) {
    end->next = newDigptr;
    return(end->next);
}
void printNumber(struct digit *start) {
    struct digit * ptr = start;
    while (ptr!=NULL) {
        printf("%d", ptr->num);
        ptr = ptr->next;
    }
    printf("\n");
}

	

void freeNumber(struct digit *start) {
    struct digit * ptr = start;
    struct digit * tmp;
    while (ptr!=NULL) {
        tmp = ptr->next;
        free(ptr);
        ptr = tmp;
    }
}

struct digit * readNumber(void) {
    char c;
    int d;
    struct digit *start, *end, *newptr;
    start = NULL;
    scanf("%c", &c);
    while (c != '\n') {
        d = c-48;
        newptr = createDigit(d);
        if (start == NULL) {
            start = newptr;
            end = start;
        } else {
            end = append(end, newptr);
        }
        scanf("%c", &c);
    }
    return(start);
}



