// Created by Ahmed_Elkhodary

/*  print this shape on the screen
    +-----------------------+                                                       
	| o | X | o | X | o | X |                                                       
	| X | o | X | o | X | o |                                                       
	| o | X | o | X | o | X |                                                       
	| X | o | X | o | X | o |                                                       
	| o | X | o | X | o | X |                                                       
	| X | o | X | o | X | o |                                                       
	+-----------------------+ 

*/

#include <stdio.h>
int main(void) {

    int i;

    printf("+");
    for (i = 0; i < 23; i++)
        printf("-");
    printf("+\n");

    for (i = 0; i < 3; i++){
        printf("| o | X | o | X | o | X |");
        printf("\n");
        printf("| X | o | X | o | X | o |");
        printf("\n");
    }
    printf("+");
    for (i = 0; i < 23; i++)
        printf("-");
    printf("+");
    
    return(0);
}