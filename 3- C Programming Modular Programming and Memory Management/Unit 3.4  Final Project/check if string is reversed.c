//Created by Ahmed_Elkhodary

/*
    Write a function isReverse() that checks wether a given word is the reverse of another given word.
    More precisely, the function should take as inputs two words (null-terminated arrays of characters)
    and return an integer. If indeed the second word is the reverse of the first then the function
	should return the integer 1, otherwise it should return a 0.

	Your main() function should read two words from the user input (you can assume that neither 
	word has more than 99 characters) and then call the function isReverse, passing both words 
	to this function. The function should return an integer as described above and your main program
 	needs to print out a sentence, indicating whether indeed, the first word is the reverse of the 
 	second word (see below examples).

	Note: The name of the function needs to be isReverse.

	Here are two sample runs:

Input:
stressed
desserts

Output:
stressed is the reverse of desserts


Input:
apple
banana

Output:
apple is not the reverse of banana
*/


# include <stdio.h>
int isReverse(char *, char *);

int main(void){

    char word1[100];
    char word2[100];
    
    scanf("%s", word1);
    scanf("%s", word2);    
    
    
	if(isReverse(word1, word2)){
	   printf("%s is the reverse of %s", word1, word2);
	} 
	else{
		printf("%s is not the reverse of %s", word1, word2);
	}   
	
    return 0;
}

int isReverse(char *ptr1, char *ptr2){
	int i , j;
	int n1 = 0;
	int n2 = 0;
	while(ptr1[n1] != '\0')
        n1++;
	while(ptr2[n2] != '\0')
        n2++;        
	
	if(n1 != n2){
		return 0;
	}
	
	for(i =0, j=n1-1; i<n1; i++, j-- ){
		if (ptr1[i] != ptr2[j]){
			return 0;
		}
	}
	return 1;
}


