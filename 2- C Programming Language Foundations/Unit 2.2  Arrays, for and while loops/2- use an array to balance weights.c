//Created by Ahmed_Elkhodary

# include <stdio.h>

int main(void){
    int i, index =0, numberOfValues;
    double sum = 0  , avr = 0, readValue;
    
    scanf("%d", &numberOfValues);
    double array[numberOfValues];
    
    for( i = 0; i < numberOfValues; i++){
        scanf("%lf\n", &readValue);
        array[index] = readValue;
        sum = sum + readValue;
        
        index = index +1;
    }
    
    avr = sum / numberOfValues;
    index = 0;
    
    for( i = 0; i < numberOfValues; i++){
        
        printf("%.1lf\n", avr - array[index]);
        index = index + 1;
    }
    
    
    return 0;
}
