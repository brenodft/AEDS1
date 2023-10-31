#include <stdio.h>

struct calendario {
    int dia;
    int mes;
    int ano;
};

typedef struct calendario calendario;


int ehBissexto(int ano) {
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        return 1;
    }
    return 0;
}


int diasNoMes(int mes, int ano) {
    int dias[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (mes == 2 && ehBissexto(ano)) {
        return 29;
    }
    return dias[mes - 1];
}


int diasDesdeReferencia(calendario data) {
    int totalDias = 0;
    for (int ano = 0; ano < data.ano; ano++) {
        totalDias += 365;
        if (ehBissexto(ano)) {
            totalDias += 1;
        }
    }
    for (int mes = 1; mes < data.mes; mes++) {
        totalDias += diasNoMes(mes, data.ano);
    }
    totalDias += data.dia;
    return totalDias;
}


int diferencaEntreDatas(calendario data1, calendario data2) {
    int diasData1 = diasDesdeReferencia(data1);
    int diasData2 = diasDesdeReferencia(data2);
    return diasData1 - diasData2;
}

int main() {
    calendario data1 = {1, 1, 2023};
    calendario data2 = {1, 1, 2022};
    
    int diferenca = diferencaEntreDatas(data1, data2);
    
    printf("A diferença entre as datas é de %d dias.\n", diferenca);
    
    return 0;
}
