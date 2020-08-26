//Created by Ahmed_Elkhodary

# include <stdio.h>

int main(void){
    int currentPopulation, expectedPopulation;
    double projectedPopulation;
    
    scanf("%d" , &currentPopulation);
    scanf("%lf", &projectedPopulation);
    
    expectedPopulation = (int)( currentPopulation * projectedPopulation / 100 ) + currentPopulation;
    
    printf("%d", expectedPopulation);
    
    return 0;
}
