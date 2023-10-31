#include <stdio.h>

struct Horario {
    int hora;
    int minuto;
    int segundo;
};

struct Horario validarHorario(int hora, int minuto, int segundo) {
    struct Horario horarioValido;

    if (hora >= 0 && hora <= 23 && minuto >= 0 && minuto <= 59 && segundo >= 0 && segundo <= 59) {
        horarioValido.hora = hora;
        horarioValido.minuto = minuto;
        horarioValido.segundo = segundo;
    } else {
        horarioValido.hora = 0;
        horarioValido.minuto = 0;
        horarioValido.segundo = 0;
    }

    return horarioValido;
}

int main() {
    int hora, minuto, segundo;

    printf("Informe a hora: ");
    scanf("%d", &hora);
    printf("Informe os minutos: ");
    scanf("%d", &minuto);
    printf("Informe os segundos: ");
    scanf("%d", &segundo);

    struct Horario horarioValido = validarHorario(hora, minuto, segundo);

    if (horarioValido.hora == 0 && horarioValido.minuto == 0 && horarioValido.segundo == 0) {
        printf("Horário inválido.\n");
    } else {
        printf("Horário válido: %02d:%02d:%02d\n", horarioValido.hora, horarioValido.minuto, horarioValido.segundo);
    }

    return 0;
}
