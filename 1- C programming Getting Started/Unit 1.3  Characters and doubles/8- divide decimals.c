//Created by Ahmed_Elkhodary

#include <stdio.h>

int main(void){
    
    double amountOfMoney, pricePerBook;
    int numberOfBooks;
    scanf("%lf %lf", &amountOfMoney, &pricePerBook);
 
    
    numberOfBooks = (int)(amountOfMoney / pricePerBook);
    printf("%d", numberOfBooks);
    return 0;
}
