//Created by Ahmed_Elkhodary

# include <stdio.h>

int main(void){
    int  matches;
    int boxes;
    
    scanf("%d\n", &matches);
    scanf("%d", &boxes);
    
    printf("%d\n", matches / boxes);
    printf("%d", matches % boxes);
    return 0;
}
