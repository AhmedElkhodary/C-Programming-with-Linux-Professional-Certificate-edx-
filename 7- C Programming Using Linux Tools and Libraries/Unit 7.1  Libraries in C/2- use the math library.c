// Created by Ahmed_Elkhodary



#include <stdio.h>
#include <math.h>

int main() {
	double num ;
	
	//printf("enter a num\n");
	scanf("%lf", &num);
	
	printf("%.8lf\n", sqrt(num));
	printf("%.10lf\n", exp(1));
	printf("gcc -std=c11 -Wall -fmax=10 -Wextra program.c -lm -o program\n");
	
	scanf("%d");
	return 0;
}

