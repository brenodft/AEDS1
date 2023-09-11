#include <stdio.h>
#include <string.h>

int main(){
    char nome[100];
    printf("Digite um nome: ");
    fgets(nome, sizeof(nome), stdin);
    int tamanho = strlen(nome)-1;
    printf("Seu nome tem %d caracteres",tamanho);
    return 0;
}