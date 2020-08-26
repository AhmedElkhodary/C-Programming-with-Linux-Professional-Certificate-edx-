
// Created by Ahmed_Elkhodary


#include <stdio.h>
#include <stdlib.h>

struct point{
	int x;
	int y;
};

void printPoint(struct point);
void printPoly(struct point *, int);
void initializePoly(struct point *, int);

int main (void){
	struct point * ptrpoly;
	int i, num;
	
	printf("Enter the number of points: ");
	scanf("%d", &num);
	
	ptrpoly = (struct point * ) malloc(num * sizeof(struct point));

    initializePoly( ptrpoly, num);
	printPoly(ptrpoly, num); 
	
	free(ptrpoly);
	scanf("%d");
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

void initializePoly(struct point * ptr, int n){
	int i;
	for(i=0; i<n; i++){
		
		//(ptr+i)->x = -i;
		//(ptr+i)->y = i * i;
			
		//ptr[i].x = -i;
		//ptr[i].y = i *  i;
	  
	    //(*(ptr+i)).x = -i;		
		//(*(ptr+i)).y = i * i;
	    
	    (&(ptr[i]))->x = -i;
	    (&(ptr[i]))->y = i * i;
	}
}


