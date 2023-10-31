#include <stdio.h>

int calculo (int n){
    int formula;
    for(int i = 1; i<=n; i++){
        formula += 4/((2*i) - 1);
    }
    return formula;
}

int main(){
    printf("Escreva o numero de termos: ");
    int num; scanf("%d",&num);
    printf("O resultado e: %d",calculo(num));
    return 0;
}