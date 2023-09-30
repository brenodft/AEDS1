#include <stdio.h>

int main(){
    int soma = 0, n;
    printf("Digite o numero de termos para ser somado: ");
    scanf("%d",&n);
    for(int i = 0; i<=n; i++){
        soma += 1/pow(2,i);
    }
    printf("\nValor da somatoria: %d",soma);
    return 0;
}