//Created by Ahmed_Elkhodary


#include <stdio.h>

int main(void){
    int age, weight, price;
    scanf("%d", &age);
    scanf("%d", &weight);
    
    if ( age == 60){
        price = 0;
    }
    
    if (age < 10){
        price = 5;
    }
    
   
    if ((age >= 10 && age < 60 ) || (age>60 )){
        if( weight >20){
           price = 40;
        }
        else{
            price = 30;
        }
    }
    
    printf("%d", price);
    
    
    
    return 0;
}
