/*
permitir o usuario a introduzir notas entre 10-20, mostrar na tela a media aritmetica entre elas
o programa para quando o usuario introduzir um valor fora do intervalo
*/

#include <stdio.h>

int main(){
    float notas,media = 0,qtd = 0;
    printf("Introduza notas entre 10-20: ");
    scanf("%f",&notas);   
    while (notas >= 10 && notas <= 20){
    qtd++;
    media += notas;
    printf("Introduza notas entre 10-20: ");
    scanf("%f",&notas);
    }
    media = media/qtd;
    printf("A media aritmetica dessas notas é igual a %.2f.",media);
    return 0;
}