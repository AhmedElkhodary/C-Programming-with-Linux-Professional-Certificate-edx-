
//Created by Ahmed_Elkhodary


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	
	if (argc != 3 ){
		printf("Invalid input.");
	}
	else{
	    int num;
    	double price;
	    double total_price;
	    num =   atoi(argv[1]);
	    price = atof(argv[2]);
    	total_price = num * price;
    	printf("%d plants for %.2lf dollars each cost %.2lf dollars.\n", num, price, total_price);
	}
	return 0;
}
