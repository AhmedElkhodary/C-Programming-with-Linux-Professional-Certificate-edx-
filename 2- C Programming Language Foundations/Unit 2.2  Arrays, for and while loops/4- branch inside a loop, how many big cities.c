//Created by Ahmed_Elkhodary

# include <stdio.h>


int main(void){
    int i, numberOfCities, numberOfCitiesAbove = 0;
    int array[20];
    
    scanf("%d", &numberOfCities);
    
    for(i=0;i<numberOfCities;i++){
        scanf("%d", &array[i]);
        if (array[i] > 10000){
            numberOfCitiesAbove = numberOfCitiesAbove + 1 ;  //numberOfCities that citizens above 10000
        }
    }
    printf("%d", numberOfCitiesAbove);

    return 0;
}
