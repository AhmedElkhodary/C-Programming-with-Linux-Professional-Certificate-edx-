//Created by Ahmed_Elkhodary

#include <stdio.h>

int main(void){
    int i, num;
    
    //printf("Enter the number:");
    scanf("%d",&num);
    for(i = 0;i<=10; i++){
        printf("%dx%d = %d\n",i, num, i*num);
    }
    
    return 0;
}
