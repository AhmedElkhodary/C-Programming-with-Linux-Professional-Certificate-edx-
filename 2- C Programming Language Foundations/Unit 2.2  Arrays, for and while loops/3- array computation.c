//Created by Ahmed_Elkhodary

#include <stdio.h>

int main(void){
    
    int i, n;
    double price[10], weight[10], totalPrice= 0;
    
    scanf("%d", &n);
    
    for(i=0;i<n;i++){
        scanf("%lf", &price[i]);
        
    }
    
    for(i=0;i<n;i++){
        scanf("%lf", &weight[i]);
    }    

    for(i=0;i<n;i++){
        totalPrice = totalPrice + (price[i] * weight[i] );
        
    }
    printf("%.6lf", totalPrice);
    
    return 0;
}
