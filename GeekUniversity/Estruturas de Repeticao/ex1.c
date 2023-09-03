//5 primeiros multiplos de 3

#include <stdio.h>

int main(){
    int resultado;
    printf("Os 5 primeiros multiplos de 3 sao: ");
    for (int i = 1; i<=5;i++){
        resultado = 3 * i;
        printf("%d ",resultado);
    }
    return 0;
}