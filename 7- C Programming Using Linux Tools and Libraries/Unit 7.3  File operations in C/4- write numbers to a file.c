
//Created by Ahmed_Elkhodary

#include <stdio.h>

int main(void){
	int  selection = 0, grade_i, grade_f, last_grade;
	
	FILE *ofile;
	char file_name[] = "myGrades.txt";
	
	//printf("please enter a grade: \n");
	scanf("%d", &grade_i);
	
	ofile = fopen( file_name,"r");
	while (fscanf(ofile, "%d", &grade_f) != EOF){
		last_grade = grade_f;
	}
	fclose(ofile);
	
	if(grade_i != last_grade){
		selection = 1;
	}else{
		selection = 2 ;
	}
	
	
	if(selection == 1){
		ofile = fopen(file_name, "a");
		
		fprintf(ofile, " %d", grade_i);
		fclose(ofile);
	}
	ofile = fopen(file_name, "r");
	while( fscanf(ofile, "%d", &grade_f) != EOF){
		printf("%d ", grade_f);
	}
	
	
	
	
	return 0;
}

