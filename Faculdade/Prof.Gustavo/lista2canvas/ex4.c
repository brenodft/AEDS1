#include <stdio.h>

int main(){
    printf("Digite o peso e altura (kg e metros): ");
    float peso,altura,imc;
    scanf("%f %f",&peso,&altura);
    imc = peso/(altura*altura);
    if (imc <16){
        printf("\nHecticidade mórbida.");
    } else if(imc <17){
        printf("\nHecticidade grave.");
    } else if(imc < 18.5){
        printf("\nAbaixo do peso.");
    } else if(imc<25){
        printf("\nPeso normal.");
    } else if(imc <30){
        printf("\nSobrepeso.");
    } else if(imc<35){
        printf("\nObesidade.");
    } else if(imc<40){
        printf("\nObesidade grave.");
    } else{
        printf("\nObesidade morbida.");
    }
    return 0;
}