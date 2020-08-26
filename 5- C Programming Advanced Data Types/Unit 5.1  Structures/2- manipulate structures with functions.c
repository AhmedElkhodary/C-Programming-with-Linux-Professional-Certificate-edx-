
//Created by Ahmed_Elkhodary

#include <stdio.h>

struct date {
        int year;
        int month;
        int day;
    };

/* function prototypes */
void printDate(struct date);
void readDate(struct date *);
struct date advanceDay(struct date); 

int main(void) {
	struct date today, tomorrow;
	readDate(&today);
	printDate(today);
	
	tomorrow = advanceDay(today);
	printDate(tomorrow);
	

	return 0;
}


struct date advanceDay(struct date today){
	struct date tomorrow;
	int year  = today.year;
	int month = today.month;
	int day   = today.day;
	
	if ( ( year % 4 == 0) && (month == 2) && ( day == 29)){
		today.month += 1;
		today.day = 1;
	}
	
	else if( (month == 1 || month == 3 || month == 5||month == 7 ||month == 8 ||  month == 10 || month == 12 ) &&  (day == 31)){
		if(month == 12){
			today.year += 1; 
			today.month = 1;
		    today.day = 1;
		}
		else{
		    today.month += 1;
		    today.day = 1;
		}

	}
	
	else if ( (( month == 4 || month == 6 || month == 9 || month == 11) && (day == 30)) || ((month == 2 ) && ( day == 28))  ){
		today.month += 1;
	 	today.day = 1;
    }
    
    else{
        today.day += 1;	
	}
	
	
	return today;
}


void readDate(struct date * today){
	scanf("%d %d %d", &(*today).year, &(*today).month, &(*today).day);
	
}

void printDate(struct date today){
	printf("%.2d/%.2d/%4d\n", today.month, today.day, today.year);
}
