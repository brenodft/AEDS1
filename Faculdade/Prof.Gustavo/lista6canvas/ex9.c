#include <stdio.h>

struct Data {
    int dia;
    int mes;
    int ano;
};

struct Horario {
    int hora;
    int minuto;
    int segundo;
};

struct DataHorario {
    struct Data data;
    struct Horario horario;
};

int main() {
    struct Data dataExemplo = {29, 10, 2023};
    struct Horario horarioExemplo = {12, 30, 45};
    
    struct DataHorario dataHorarioExemplo;
    dataHorarioExemplo.data = dataExemplo;
    dataHorarioExemplo.horario = horarioExemplo;
    
    printf("Data: %02d/%02d/%04d\n", dataHorarioExemplo.data.dia, dataHorarioExemplo.data.mes, dataHorarioExemplo.data.ano);
    printf("Horário: %02d:%02d:%02d\n", dataHorarioExemplo.horario.hora, dataHorarioExemplo.horario.minuto, dataHorarioExemplo.horario.segundo);

    return 0;
}
