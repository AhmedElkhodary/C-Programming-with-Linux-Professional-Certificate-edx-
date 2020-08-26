//Created by Ahmed_Elkhodary

#include <stdio.h>


int main(void){
    int total_population;
    int day = 1;
    int total_infect= 1;
    
    scanf("%d", &total_population);
    
    
    while(total_infect < total_population){
        
        total_infect *= 3;
        day = day + 1;
        
    }
    printf("%d", day);
    
    return 0;
    
}
