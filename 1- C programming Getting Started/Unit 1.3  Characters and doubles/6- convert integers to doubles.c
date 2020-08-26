//Created by Ahmed_Elkhodary


# include <stdio.h>

int main(void){
    int i;
    int gradesNumber, grade;
    int sum = 0;
    double average;
    
    scanf("%d", &gradesNumber);
    for( i=0; i<gradesNumber; i++){
        scanf("%d", &grade);
        sum = sum + grade;
    }
    average = (double)sum / gradesNumber;
    printf("%.2lf", average);
    
    return 0;
}
