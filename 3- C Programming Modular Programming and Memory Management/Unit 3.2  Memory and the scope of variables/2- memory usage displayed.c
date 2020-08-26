//Created by Ahmed_Elkhodary

#include <stdio.h>

int main(void){
    int  len, bytes = 0, KB, B, MB;
    char type;
    scanf("%c %d", &type, &len);
    
    if(type == 'i'){
    	bytes = sizeof(int)*len;
        //KB = bytes /1000;
        //B  = bytes %1000;
        
    }
    else if(type == 'd'){
    	bytes = sizeof(double)*len;
 	
	}
	
	MB = bytes / 1000000;
	KB = (bytes % 1000000)/ 1000;
	B  = (bytes % 1000000)% 1000; 
	
	if(!MB && !KB){
        printf("%d B", B);		
	}
	else if(!MB){
        printf("%d KB and %d B", KB, B);		
  	}
	else{
        printf("%d MB and %d KB and %d B",MB,  KB, B);		
	} 	
  
    return 0;
}
