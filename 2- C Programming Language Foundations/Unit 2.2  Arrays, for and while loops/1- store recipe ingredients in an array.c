//Created by Ahmed_Elkhodary

# include <stdio.h>

int main(void){
    
    int i , readValue = 0, index = 0;
    int array[10];
    
    for(i = 0; i < 10; i++){
        scanf("%d", &readValue);
        array[index] = readValue;
        index = index +1;
    }
    scanf("%d", &index);
    printf("%d", array[index]);
    
    
    
    return 0 ;
}
