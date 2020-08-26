//Created by Ahmed_Elkhodary

#include <stdio.h>

int main(void){


    int i=0, length, found= -1;
    char word[15];
    
    scanf("%s", word);
    
    while(word[i] != '\0')
       i++;
    length = i;
    for(i = 0; i< length; i++){
        if(length % 2 == 0){
           if((i <  length/2) && ((word[i] == 't') || ( word[i] == 'T')))
              found = 1;
           if((i >= length/2) && ((word[i] == 't') || ( word[i] == 'T')))
              found = 2; 
        }
        else{
           if((i <= length/2) && ((word[i] == 't') || ( word[i] == 'T')))
              found = 1;
           if((i >  length/2) && ((word[i] == 't') || ( word[i] == 'T')))
              found = 2;         	
        	
		}
    }
    printf("%d", found);
    
    return 0;
}
