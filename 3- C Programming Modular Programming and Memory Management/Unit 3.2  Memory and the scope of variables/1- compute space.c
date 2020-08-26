//Created by Ahmed_Elkhodary

# include <stdio.h>

int main(void){
    
    int n, i, sum =0, num;
    char type;
    scanf("%d", &n);
    
    for(i=0; i<n; i++){
        scanf("%d %c", &num, &type);
        if (type == 'c'){
            sum +=  ( num * sizeof(char));
        }
        else if (type == 'i'){
            sum +=  ( num * sizeof(int));

        }        
        else if (type == 'd'){
            sum +=  ( num * sizeof(double));

        }
        else{
           printf("Invalid tracking code type");
           return 0;
        }
    }
    printf("%d bytes", sum);
    
    return 0;
}
