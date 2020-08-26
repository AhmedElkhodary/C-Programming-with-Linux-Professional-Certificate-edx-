//Created by Ahmed_Elkhodary


# include <stdio.h>

int main(void){
  int i, j, k, rep= 0;
  int length= 0;
  char swap;
  char word[50] ;
  char ch = '\0';
  scanf("%s", word);
  
  while(word[length] != '\0')
  	length++;
  
  //printf("%d\n", length);  
  for(j= 0; j<length-1; j++){
  	for(i= 0; i< length-1; i++){
  		if (word[i] > word[i+1]){
  			swap = word[i];
  			word[i] = word[i+1];
  			word[i+1] = swap;
        }
	}
   }
    
   for(k= 0; k<length-1; k++){
		if(word[k+1] == word[k]){
   	   	    if (ch != word[k] )
				rep++;
				ch = word[k];
	    }
 
   }
   /*
   for(k= 0; k<length; k++){
   	   printf("%c", word[k]);
   }   
   */
   printf("\n%d", rep);


  return 0 ;
  
}



