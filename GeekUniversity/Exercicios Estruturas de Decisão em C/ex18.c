//4 operacoes

#include <stdio.h>

int main(){
    int opcao;
    float num1,num2,calculo;
    do{
        printf("\nCalculadora\n1- Somar 2 numeros \n2- Subtrair 2 numeros \n3- Multiplicar 2 numeros\n4- Dividir 2 numeros \n0- Sair \nOpcao: ");
        scanf("%d",&opcao);
        switch(opcao){
            case 1: printf("\nDigite o primeiro numero: "); scanf("%f",&num1); printf("\nDigite o segundo numero: "); scanf("%f",&num2); calculo = num1+num2; printf("\nResultado: %.2f",calculo); break;
            case 2: printf("\nDigite o primeiro numero: "); scanf("%f",&num1); printf("\nDigite o segundo numero: "); scanf("%f",&num2); calculo = num1-num2; printf("\nResultado: %.2f",calculo);  break;
            case 3: printf("\nDigite o primeiro numero: "); scanf("%f",&num1); printf("\nDigite o segundo numero: "); scanf("%f",&num2); calculo = num1*num2; printf("\nResultado: %.2f",calculo);  break;
            case 4: printf("\nDigite o primeiro numero: "); scanf("%f",&num1); printf("\nDigite o segundo numero: "); scanf("%f",&num2); calculo = num1/num2; printf("\nResultado: %.2f",calculo);  break;
            case 0: printf("\nSaindo do programa..."); break;
        }
    }while(opcao != 0);
    return 0;
}