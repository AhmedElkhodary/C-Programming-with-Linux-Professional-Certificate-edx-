//Created by Ahmed_Elkhodary


# include <stdio.h>

int sumOfDigits(int);
int main(void){
    int N;
    
    scanf("%d", &N);
    
    printf("%d", sumOfDigits(N));
 
    return 0;
}

int sumOfDigits(int n){
	int i, t =10 ;
	while((n / t) > 0 ){
		t = t*10;
		i= t/10;	
	}

	if (n < 10 ){
		return n;
	}else{
	
	return (n/i + sumOfDigits(n%i));
    }
    
}
