//Created by Ahmed_Elkhodary

#include <stdio.h>

int  main(void){
    
    double kilometers, miles;
    //printf("Please Enter Distance (kilometers):");
    scanf("%lf", &kilometers);
    
    miles = kilometers * 0.6213711;
    
    printf("%.6lf", miles);
    
    
    return 0;
}
