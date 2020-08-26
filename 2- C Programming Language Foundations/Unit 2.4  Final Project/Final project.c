//Created by Ahmed_Elkhodary

/*
	You just computed final scores for all of the students in your classroom and would like 
	to tell each student their ranking when compared to the other students in your class.
 	For example, if Remi's score is 14, Yan's score is 2 and Maria's score is 20 then Remi's 
 	ranking is 2 since he has the second highest score, Yan's ranking is 3 since he has the 
	lowest score and Maria's ranking is 1 since she has the highest score amongst the three students.

	You'll be given the following inputs: first the number of students, then all of the students' 
	final scores, then finally, all of the students' names. Be sure to look at the example below.

	Your output should be one line per student, with each line displaying the student's name
	followed by "rank is" followed by the student's rank.

	The order in which names are displayed in the output should be the same as the order given in the input. 
	The ranking starts at 1 (meaning this student has the highest score), 2 for the second highest grade etc...

Example:

Input:

3
14
2
20
Remi
Yan
Maria

Output:

Remi rank is 2
Yan rank is 3
Maria rank is 1

*/

# include <stdio.h>

int main(void){
    
    int i, num, j, rank;
    int grades[51];
    int ranking[30];
    char name[31];
    scanf("%d", &num);
    
    for(i=0;i<num; i++) {
        scanf("%d", &grades[i]);
    }
	
	
    for(j = 0; j< num; j++){
	    rank = 0;
    	for(i = 0; i < num; i++){	
    		if (grades[j] < grades[i]){
                rank++;			
			}
			ranking[j]= rank+1;
		}	
    }

    
    for(i =0 ;i < num; i++){
    	scanf("%s", name);
    	printf("%s rank is %d\n",name,ranking[i]);
	}

    scanf("%d");
    return 0;
}
