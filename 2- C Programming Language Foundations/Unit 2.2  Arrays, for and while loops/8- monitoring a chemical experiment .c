//Created by Ahmed_Elkhodary

#include <stdio.h>

int main(void){
    int min_temp, max_temp, temp;
    
    scanf("%d %d", &min_temp, &max_temp);
    
    scanf("%d", &temp);
    
    int notn = temp != -999;
    
    while(notn){
        if(temp <= max_temp && temp >= min_temp){
            printf("Nothing to report\n");
        }
        else{
            printf("Alert!\n");
            break;
        }
        scanf("%d", &temp);
        notn = temp != -999;
    }
    return 0;
}

