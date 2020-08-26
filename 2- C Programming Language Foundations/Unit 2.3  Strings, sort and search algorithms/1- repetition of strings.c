//Created by Ahmed_Elkhodary

#include <stdio.h>

int main(void){
    int i , num;
    char word[101];
    
    scanf("%d %s", &num, word );
    
    for(i=0; i<num; i++){
        printf("%s\n", word);
    }
    
    
    return 0;
}
