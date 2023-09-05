#include <stdio.h>
#include <math.h>

int main(){
    float funcao,x;
    printf("Digite o valor de x: ");
    scanf("%f", &x);
    if (x < -1){
        funcao = 0;
    } else if (x>-1 && x<0){
        funcao = 1+x;
    } else if (x>0 && x<1){
        funcao = sqrt(1-(x*x));
    } else if (x>1){
        funcao = 0;
    }
    printf("O resultado da funcao e igual a %.2f",funcao);
    return 0;
}