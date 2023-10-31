#include <stdio.h>

struct calendario {
    int dia;
    int mes;
    int ano;
} typedef calendario;

calendario funcdata(calendario data, int diapassado){
    calendario novadata;
    novadata.dia = data.dia + diapassado;
    novadata.mes = data.mes;
    novadata.ano = data.ano;
    int bissexto;
    do{
    if ((novadata.ano % 4 == 0 && novadata.ano % 100 != 0) || (novadata.ano % 400 == 0)) {
        bissexto = 1;
    } else{
        bissexto = 0;
    }
    if(novadata.mes %2 != 0 && novadata.mes <8 && novadata.dia > 31){
        novadata.dia = novadata.dia - 31;
        novadata.mes = novadata.mes + 1;
    } else if(novadata.mes %2 == 0 && novadata.mes < 8 && novadata.dia >30 && novadata.mes != 2){
        novadata.dia = novadata.dia -30;
        novadata.mes = novadata.mes+1;
        if(novadata.dia == 31){
            novadata.dia = 1;
        }
    } else if(novadata.mes == 2){
        if(bissexto == 1 && novadata.dia > 29){
        novadata.dia = novadata.dia - 29;
        novadata.mes++;
        }else if(bissexto == 0 && novadata.dia >28){
        novadata.dia = novadata.dia - 28;
        novadata.mes++;
        }
    }
    if(novadata.mes %2 == 0 && novadata.mes >7 && novadata.dia > 31){
        novadata.dia = novadata.dia - 31;
        novadata.mes = novadata.mes + 1;
    } else if(novadata.mes %2 != 0 && novadata.mes > 7 && novadata.dia >30 && novadata.mes != 2){
        novadata.dia = novadata.dia -30;
        novadata.mes = novadata.mes+1;
        if(novadata.dia == 31){
            novadata.dia = 1;
        }
    }
    if(novadata.mes > 12){
        novadata.mes = 1;
        novadata.ano ++;
    }
    }while(novadata.dia>31);
    return novadata;
}

int main(){
    calendario data;
    int bissexto = 0;
    printf("Digite o dia: ");
    scanf("%d",&data.dia);
    printf("Digite o mes: ");
    scanf("%d",&data.mes);
    printf("Digite o ano: ");
    scanf("%d",&data.ano);
        if ((data.ano % 4 == 0 && data.ano % 100 != 0) || (data.ano % 400 == 0)) {
        bissexto = 1;
    }
    
    if (bissexto == 1 && data.mes == 2 && data.dia > 29) {
        printf("A data que você escreveu foi: 0/0/0");
        return 0;
    } else if (bissexto == 0 && data.mes == 2 && data.dia > 28) {
        printf("A data que você escreveu foi: 0/0/0");
        return 0;
    }
    
    if (data.mes < 1 || data.mes > 12) {
        printf("A data que você escreveu foi: 0/0/0");
        return 0;
    }
    
    if ((data.mes <= 7 && data.mes % 2 == 1 && data.dia > 31) ||
        (data.mes <= 7 && data.mes % 2 == 0 && data.dia > 30) ||
        (data.mes > 7 && data.mes % 2 == 0 && data.dia > 31) ||
        (data.mes > 7 && data.mes % 2 == 1 && data.dia > 30)) {
        printf("A data que você escreveu foi: 0/0/0");
        return 0;
    }
    
    if (data.ano < 0) {
        printf("A data que você escreveu foi: 0/0/0");
        return 0;
    }
    printf("Digite os dias que se passaram: ");
    int dias;
    scanf("%d",&dias);
    calendario novadata= funcdata(data,dias);
    printf("A nova data e igual a: %d/%d/%d",novadata.dia,novadata.mes,novadata.ano);
    return 0;
}