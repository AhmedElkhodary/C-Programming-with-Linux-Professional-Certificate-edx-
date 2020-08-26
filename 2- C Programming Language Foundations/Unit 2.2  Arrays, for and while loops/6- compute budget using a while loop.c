//Created by Ahmed_Elkhodary

# include <stdio.h>

int main(void){
    int num , sum = 0, notn;
    
    scanf("%d", &num);
    
    notn = num != -1;
    
    while(notn){
        sum = sum + num;
        scanf("%d", &num);
        notn = num != -1;
    }
    
    printf("%d", sum);
    
    
    return 0;
}
