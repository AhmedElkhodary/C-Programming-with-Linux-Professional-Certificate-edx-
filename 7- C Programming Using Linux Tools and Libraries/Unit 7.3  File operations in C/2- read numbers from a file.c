
//Created by Ahmed_Elkhodary

#include <stdio.h>

int main(void){
	
	int N, i, num, sum = 0;
	double avr;
	FILE *ifile;
	
	ifile = fopen("studentGrades.txt","r");
	
	fscanf(ifile, "%d", &N);
	//printf("There are %d numbers in the file\n", N);
	
	for(i=0; i<N; i++){
		fscanf(ifile, "%d", &num);
		sum += num;
	}
	avr = (double)sum / N;
	printf("%.2lf\n", avr);
	
	fclose(ifile);
	return 0;
}
