
//Created by Ahmed_Elkhodary

#include <stdio.h>


int main(void){
	int class_num, index;
	double num, large_grade;
	
	FILE *ifile;
	
	class_num = 0;
	large_grade = 0.0;
	index =0;
	
	ifile = fopen("gradeComparison.txt","r");
	
	
	
	while( fscanf(ifile, "%lf", &num) != EOF){
		
		index++;
		if(num > large_grade){
			large_grade = num;
			class_num = index;
		}
	}
	
	if(class_num == 1){
		printf("yes\n");
	}
	else{
		printf("No %d\n", class_num);
	}
	
	
	return 0;
}
