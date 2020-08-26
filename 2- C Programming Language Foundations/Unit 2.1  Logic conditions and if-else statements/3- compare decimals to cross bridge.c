//Created by Ahmed_Elkhodary

#include <stdio.h>

int main(void){
    int n1, n2, sum;
    scanf("%d", &n1);
    scanf("%d", &n2);
    
    sum = n1 + n2;
    
    if(sum >= 10){
        printf("special tax\n%d", 36);
    }
    else{
        printf("Regular tax\n%d", sum *2);
    }
    return 0;
}
