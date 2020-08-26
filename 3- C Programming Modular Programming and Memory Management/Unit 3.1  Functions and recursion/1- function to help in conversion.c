//Created by Ahmed_Elkhodary

#include <stdio.h>

void MeterToFeels(double);
void GramsToPounds(double );
void CelsiusToFahrenheit(double );

int main(void){
   int n, i;
   char sign;
   double value;   
   
   scanf("%d", &n);
   for(i = 0; i<n; i++){
   	  scanf("%lf %c", &value, &sign );
   	  
	  if(sign == 'm')
        MeterToFeels(value);
	  else if(sign == 'g' )
	    GramsToPounds(value);
	  else if(sign == 'c' )
	    CelsiusToFahrenheit(value);			
   	
   }
 
   return 0;
}

void MeterToFeels(double m){
	double result;
	result = m * 3.2808;
	printf("%.6lf ft\n", result);
}

void GramsToPounds(double g){
	double result;
	result = g * 0.002205;
	printf("%.6lf lbs\n", result);
}

void CelsiusToFahrenheit(double c){
	double result;
	result = 32+ 1.8 * c ;
	printf("%.6lf f\n", result);
}




