#include <stdio.h>
#include <string.h>

int main(){
    printf("Digite um texto: ");
    char texto1[300],texto2[300];
    scanf("%s",texto1);
    printf("\nAgora digite outro texto: ");
    scanf("%s",texto2);
    strcat(texto1,texto2);
    printf("A soma das strings é: %s",texto1);
    return 0;
}