
//Creaded by Ahmed_Elkhodry


#include <stdio.h>
#include <math.h>
#include <string.h>


struct star {
	char name[50];
	int temperature;
	double luminosity;
	double radius;
	char classification;
};

int readStars(struct star []);
void computeRadii(struct star mystars[], int N);
void classifyStars(struct star mystars[],int N);
void printStars(struct star mystars[], int N); 

int main(void){
	struct star mystars[50];
	int N;
	
	N = readStars(mystars);
	computeRadii(mystars, N);
	classifyStars(mystars, N);
	printStars(mystars, N);
	return 0;
}

int readStars(struct star mystars[]){
	int i=0, n = 0, temp;
	char name[15];
	double lum;
	FILE *file ;
	
	file = fopen("stardata.txt", "r");
	while(fscanf( file, "%s", name) != EOF){
		strcpy((mystars+i)->name, name);
		fscanf(file, "%d", &temp);
		mystars[i].temperature = temp;
		fscanf(file, "%lf", &lum );
		mystars[i].luminosity = lum;
		i++;
		n++;
	}
	
	return n;
}

void computeRadii(struct star mystars[], int N){
	int i , T;
	double Ts, L, R;
	
	Ts = 3500;
	for(i=0; i<N; i++){
		
		T = mystars[i].temperature;
		L = mystars[i].luminosity;
		R = pow((Ts/T), 2) * sqrt(L);
		
		mystars[i].radius = R;
		
	}
}

void classifyStars(struct star mystars[], int N){
	double L;
	double R;
	int i;
	
	for(i=0; i<N; i++){
		L = mystars[i].luminosity;
		R = mystars[i].radius;
		
		if((L >= pow(10, -2)) && (L <= pow(10, 6)) && (R >= 0.1) && (R <= 10)){
			mystars[i].classification = 'M';
		}
		else if((L >= pow(10, 3)) && (L <= pow(10, 5)) && (R >= 10) && (R <= 100)){
			mystars[i].classification = 'G';
		}
		else if((L >= pow(10, 5)) && (L <= pow(10, 6)) && (R > 100)){
			mystars[i].classification = 'S';
		}
		else if( R < .01){
			mystars[i].classification = 'W';
		}
		else{
			mystars[i].classification = 'N';
		}
		
	}
}

void printStars(struct star mystars[], int N) {
	int i;
	for (i=0; i<N; i++) {
		printf("%s is a ", mystars[i].name);
		if (mystars[i].classification == 'M') {
			printf("Main Sequence Star\n");
		} else if (mystars[i].classification == 'G') {
			printf("Giant\n");
		} else if (mystars[i].classification == 'S') {
			printf("Supergiant\n");
		} else if (mystars[i].classification == 'W') {
			printf("White Dwarf\n");
		} else if (mystars[i].classification == 'N') {
			printf("Unclassified Star\n");
		} else {
			printf(" !!! Warning: '%c' not a valid classification code!!!\n", mystars[i].classification);
		}
		printf("Temp = %d Kelvin, Lum = %.4lf Sol, Rad = %.2lf * R_Sun\n\n", mystars[i].temperature, mystars[i].luminosity, mystars[i].radius);
	}
}


