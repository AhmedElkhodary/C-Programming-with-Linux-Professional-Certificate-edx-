//Created by Ahmed_Elkhodary

#include <stdio.h>

int main(void){
    double amountOfCement;
    int bugs;
    int totalCost;
    scanf("%lf", &amountOfCement);
    
    bugs =  amountOfCement/120 + 1;
    totalCost =  bugs * 45;
    printf("%d", totalCost);
    
    
    return 0;
}
