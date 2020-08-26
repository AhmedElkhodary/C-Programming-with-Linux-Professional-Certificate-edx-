//Created by Ahmed_Elkhodary

#include <stdio.h>

int main(void){
    
    int passengerNumber;
    double gas, cost;
    
    scanf("%d %lf", &passengerNumber, &gas);
    
    if (passengerNumber == 0){
        printf("%.2lf", gas);
    }
    else{
        cost = (1 + gas) / (passengerNumber + 1);
        printf("%.2lf", cost);
    }
    
    
    return 0 ;
}
