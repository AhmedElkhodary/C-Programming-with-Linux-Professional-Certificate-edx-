//Created by Ahmed_Elkhodary

# include <stdio.h>


int main(void){
    int i, j, n ;
    
    scanf("%d", &n);
    
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
