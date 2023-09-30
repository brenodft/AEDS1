#include <stdio.h>

int main(){
    int meses;
    float valor,entrada,amort,devedor,juros,prest;
    printf("Digite o valor do imovel: ");
    scanf("%f",&valor);
    printf("Digite o valor de entrada para o imovel: ");
    scanf("%f",&entrada);
    printf("Digite o numero de meses: ");
    scanf("%d",&meses);
    if(meses <60 || meses > 360){
        printf("Valor invalido, tente novamente: ");
        scanf("%d",&meses);
    }
    if(valor<100000){
        printf("\nInfelizmente nao sera possivel conceder o emprestimo.\nO valor do seu imovel deve ser no minimo 100000.");

    } else if( entrada < valor*0.2 || entrada > valor * 0.75){
        printf("\nValor de entrada excede os limites da empresa.");
    }
    devedor = valor-entrada;
    amort = devedor/meses;
    juros = devedor * 0.1;
    prest = amort + juros;
    printf("\nValor da primeira prestacao: %.2f\nValor total: %.2f",prest,prest*meses);
    return 0;
}