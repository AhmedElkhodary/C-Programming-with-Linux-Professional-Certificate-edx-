//Created by Ahmed_Elkhodary

#include <stdio.h>

int main(void){
    int hourNumber; //bettwen (0 and 12)
    int price;
    scanf("%d", &hourNumber);
    price = 10 + (hourNumber * 5);
    
    if (price < 53){
        printf("%d", price);
    }
    else{
        printf("53");
    }
    return 0;
}
