//Created by Ahmed_Elkhodary

#include <stdio.h>

int main(void){
    int i, n1, n2;
    int numberPerTeam, sum1 = 0, sum2 = 0, result;
    scanf("%d", &numberPerTeam);
    
    for(i = 0; i<numberPerTeam; i++){
        scanf("%d", &n1);
        sum1 = sum1 + n1;
        scanf("%d", &n2);
        sum2 = sum2 + n2;
    }

    result = (sum1 > sum2);
    
    if ( result){
        printf("Team 1 has an advantage\n");
        printf("Total weight for team 1: %d\n", sum1);
        printf("Total weight for team 2: %d", sum2);
    }
    else{
        printf("Team 2 has an advantage\n");
        printf("Total weight for team 1: %d\n", sum1);
        printf("Total weight for team 2: %d", sum2);
        
    }
    
    return 0;
}
