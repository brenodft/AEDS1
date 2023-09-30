#include <stdio.h>

int main(){
    printf("Digite o numero de termos da sequencia: ");
    int num,termoanterior = 0, termoatual = 1,proxtermo;
    scanf("%d",&num);
    for(int i = 1; i<=num;i++){
        printf("%d ",termoanterior);
        proxtermo = termoanterior + termoatual;
        termoanterior = termoatual;
        termoatual = proxtermo;
    }
    return 0;
}