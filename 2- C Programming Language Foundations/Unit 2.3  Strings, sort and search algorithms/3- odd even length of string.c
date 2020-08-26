//Created by Ahmed_Elkhodary

#include <stdio.h>

int main(void){
    int i = 0;
    char name[50];
    scanf("%s", name);
    
    while(name[i] != '\0')
        i++;
    
    if(i%2 == 0)
      printf("1");
    else
      printf("2");
    
    return 0;
}
