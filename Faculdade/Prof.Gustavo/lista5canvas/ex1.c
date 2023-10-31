#include <stdio.h>

int parimpar(int valor){
    if(valor%2 == 0){
        return 1;
    } else{
        return 0;
    }
}

int main(){
    printf("Digite um valor: ");
    int valor;
    scanf("%d",&valor);
    printf("Se retornar 1 e par\nSe retornar 0 e impar\nValor do retorno: %d",parimpar(valor));
    return 0;

}