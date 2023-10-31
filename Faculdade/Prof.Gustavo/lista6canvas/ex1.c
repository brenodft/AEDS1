#include <stdio.h>

struct calendario{
    int dia;
    int mes;
    int ano;
} typedef calendario;

int main(){
    calendario data;
    do{
    printf("Digite o dia de hoje: ");
    scanf("%d", &data.dia);
    }while(data.dia>31);
    do{
    printf("Digite o mes de hoje: ");
    scanf("%d", &data.mes);
    }while (data.mes > 12);
    do{
    printf("Digite o ano de hoje: ");
    scanf("%d", &data.ano);
    } while(data.ano<0);
    return 0;
}