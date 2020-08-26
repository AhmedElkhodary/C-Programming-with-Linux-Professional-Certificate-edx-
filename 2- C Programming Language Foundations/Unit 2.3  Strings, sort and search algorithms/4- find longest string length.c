//Created by Ahmed_Elkhodary

#include <stdio.h>

int main(void){
    
    int i, l, nbword, longest = 0;
    char word[11];
    
    scanf("%d", &nbword);

    for(i = 0; i<nbword; i++){
        scanf("%s", word);
        l = 0;
        while(word[l] != '\0')
           l++;
        if(l > longest)
           longest = l;   
    }
    printf("%d", longest);
    
    
    return 0;
}
