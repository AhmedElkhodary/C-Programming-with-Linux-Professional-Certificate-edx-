// Created by Ahmed_Elkhodary


#include <stdio.h>
#include <stdlib.h>

int * allocateIntArray(int);
int ** allocateIntStarArray(int);

int main(void){
	int i, j;
    int length, width;
    int * lengthPtr;
    int ** widthPtr;
    
    scanf("%d", &length);
    scanf("%d", &width );
    
    widthPtr  = allocateIntStarArray(width);
    for(i = 0; i< width; i++){
        lengthPtr = allocateIntArray(length);
        *(widthPtr+i) = lengthPtr;
    }
    
    for(i=0; i<width; i++){
    	for(j=0; j<length; j++){
    	   scanf("%d", &*(*(widthPtr+i)+j));
		}
	}
	
	for(i=0; i<width; i++){
    	for(j=0; j<length; j++){
    	   if( *(*(widthPtr+i)+j) > 1000){
    	   	  printf("[X]");
		   }
		   else if ( (*(*(widthPtr+i)+j) >= 100) && (*(*(widthPtr+i)+j) <= 1000)){
		   	  printf("[*]");
		   }
		   else{
		   	printf("[ ]");
		   }
		}
		printf("\n");
	}

    return 0;
}


int ** allocateIntStarArray(int num){
    int ** ptr = (int **) malloc(num * sizeof(int *));
    return ptr;
}

int * allocateIntArray(int num){
    int * ptr = (int *) malloc(num * sizeof(int));
    return ptr;
}
