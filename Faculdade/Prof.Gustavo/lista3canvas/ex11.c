#include <stdio.h>
#include <math.h>

int main(){
    printf("Digite o valor de x: ");
    int x,n,soma = 0.,lnx;
    scanf("%d",&x);
    printf("Digite o numero de termos: ");
    scanf("%d",&n);
    for(int i = 1; i<= n; i++){
        if(x - 1 >= 0){
            soma += (pow(-1,i) + pow(-1+x,i))/i;
        } else{
            soma += (pow(-1,i) - pow(-1+x,i))/i;
        }
    }
    lnx = log(x);
    printf("O resultado é %d e o ln(x) é %d",soma,lnx);
    return 0;
}