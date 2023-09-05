#include <stdio.h>

int main(){
    printf("Digite dia mes e ano: ");
    int dia,mes,ano;
    scanf("%d %d %d",&dia,&mes,&ano);
    if (dia > 31 || dia<0){
        printf("Dia Invalido!");
    } else{
        printf("Dia valido.");
    }
    if (mes>12 || mes<0){
        printf("Mes invalido.");
    } else{
        printf("Mes valido");
    }

    return 0;
}