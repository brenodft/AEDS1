// leia a distancia em km e a qtd de litros de gasolina consumidos

#include <stdio.h>

int main(){
    float distancia,litros,consumo;
    printf("Digite a distancia em km e a qtd de litros de gasolina consumidos: ");
    scanf("%f %f",&distancia, &litros);
    consumo = distancia/litros;
    if (consumo < 8){
        printf("\nVenda o carro!");
    } else if (consumo > 8 && consumo <14){
        printf("\nEconomico");
    } else if (consumo > 12){
        printf("\nSuper economico");
    }
    return 0;
}