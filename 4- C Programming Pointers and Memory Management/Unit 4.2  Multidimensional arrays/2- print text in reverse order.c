// Created by Ahmed_Elkhodary

#include <stdio.h>

int main(void){
	int i;
	char word[68][40];
	
	
	for(i=0; i<68; i++){
		
		scanf("%s", word[i]);
	}
	
	
	for(i=67; i>=0; i--){
		
		printf("%s ", word[i]);
	}	
	
	return 0;
}
