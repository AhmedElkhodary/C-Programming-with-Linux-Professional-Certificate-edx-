//Created by Ahmed_Elkhodary


#include <stdio.h>

int main(void){
    int height = 0; 
    int numberOfleaf = 0;
    
    scanf("%d",&height);
    scanf("%d",&numberOfleaf);
    
    int Tinuviel = height <= 5 && numberOfleaf >= 8;
    int Calaelen = height >= 10 && numberOfleaf >= 10;
    int Falarion = height <= 8 && numberOfleaf <= 5;
    int Dorthonion = height >= 12 && numberOfleaf <= 7;
    
    if (Tinuviel){
        printf("Tinuviel");
    }
    
    if (Calaelen ){
        printf("Calaelen");
    } 
    if (Falarion ){
        printf("Falarion");
    }
    
    if (Dorthonion){
        printf("Dorthonion");
    }
    
    if( !Tinuviel && !Calaelen && !Falarion && !Dorthonion){
        printf("Uncertain");
    }
    
    return 0 ;
}
