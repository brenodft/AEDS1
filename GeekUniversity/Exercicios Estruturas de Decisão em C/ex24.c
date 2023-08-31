
#include <stdio.h>
#include <string.h>

int main(){
    float valor;
    char estado[3];
    printf("Digite o valor do produto e o estado destino: ");
    scanf("%f %s",&valor,estado);
    if (strcmp(estado, "MG") == 0 ){
        valor = valor * 0.93;
        printf("No estado de Minas Gerais, o produto custa R$ %.2f",valor);
    } else if(strcmp(estado, "SP") == 0 ){
        valor = valor * 0.88;
        printf("No estado de São Paulo, o produto custa R$ %.2f",valor);       
    } else if (strcmp(estado, "RJ") == 0 ){
        valor = valor * 0.85;
        printf("No estado do Rio de Janeiro, o produto custa R$ %.2f",valor);     
    } else if (strcmp(estado, "MS") == 0 ){
        valor = valor * 0.92;
        printf("No estado do Mato Grosso do Sul, o produto custa R$ %.2f",valor);     
    }
    return 0;
}