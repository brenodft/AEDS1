//numero harmonico

#include <stdio.h>

int main(){
    printf("Digite um valor inteiro e positivo: ");
    int valor;
    float formula;
    scanf("%d",&valor);
    formula = 0;
    for (float i = 1; i <=valor ; i++){
        formula += 1/i;
    }
    printf("\nResultado: %.2f",formula);
    return 0;
}