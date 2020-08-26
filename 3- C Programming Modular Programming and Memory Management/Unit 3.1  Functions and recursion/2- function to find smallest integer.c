//Created by Ahmed_Elkhodary

#include <stdio.h>

int min(int, int);

int main(void){
    int n, num, i, minn =100 ;
    scanf("%d", &n);
    
    for(i=0; i<n; i++){
        scanf("%d", &num);
        minn = min(num, minn);
    }
    printf("%d", minn);
    
    
    
    return 0;
}

int min(int x , int minn){
    if (x < minn)
      minn = x;
    
    return minn;  
}
