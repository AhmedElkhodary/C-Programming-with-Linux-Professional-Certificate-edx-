//Created by Ahmed_Elkhodary


# include <stdio.h>

int main(void){
    int i;
    int height = 0, weight = 0, enginePower = 0, resistance = 0;
    int num_robots = 0, sum = 0;
    
    //printf("number Of Robots:");
    scanf("%d", &num_robots);
    
    for(i = 0; i<num_robots; i++){
        //printf("Enter Height, Weitht, EnginePower, Resistance\n");
        scanf("%d%d%d%d",&weight,&height, &enginePower, &resistance);
        sum = sum + (( height - weight ) * ( enginePower + resistance ));
    }
    printf("%d", sum);
    
    return 0;
}
