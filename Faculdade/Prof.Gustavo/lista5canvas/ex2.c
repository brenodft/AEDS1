#include <stdio.h>

void fibonacci(int qtd){
    int formula[qtd];
    formula[0] = 0;
    formula[1] = 1;
    
    printf("A sequencia para %d termos e: ",qtd);
    for(int i =2; i<qtd; i++){
        formula[i] = formula[i-1]  + formula[i-2];
    }
    for(int i = 0; i<qtd; i++){
        printf("%d ",formula[i]);
    }
}

int main(){
    printf("Digite a quantidade de termos a ser impressa: ");
    int qtd;
    scanf("%d",&qtd);
    fibonacci(qtd);
    return 0;
}