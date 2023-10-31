#include <stdio.h>

struct calendario {
    int dia;
    int mes;
    int ano;
} typedef calendario;

int main() {
    calendario data;
    int bissexto = 0;
    
    printf("Digite o dia de hoje: ");
    scanf("%d", &data.dia);
    printf("Digite o mes de hoje: ");
    scanf("%d", &data.mes);
    printf("Digite o ano de hoje: ");
    scanf("%d", &data.ano);
    
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
    
    printf("A data que você escreveu foi: %d/%d/%d", data.dia, data.mes, data.ano);
    return 0;
}
