//Created by Ahmed_Elkhodary

#include <stdio.h>

int main(void){
    int i, num;
    char firstName[101];
    char lastName[101];
    
    scanf("%d", &num);
    for(i=0; i<num; i++){
        scanf("%s %s", firstName, lastName);
        printf("%s %s\n", lastName, firstName);
    }
    
    return 0;
}
