#include <stdio.h>

struct Horario {
    int hora;
    int minuto;
    int segundo;
};

int horarioParaSegundos(struct Horario horario) {
    int segundos = horario.hora * 3600 + horario.minuto * 60 + horario.segundo;
    return segundos;
}

int main() {
    struct Horario horario = {12, 30, 45};
    
    int totalSegundos = horarioParaSegundos(horario);
    
    printf("Total de segundos: %d\n", totalSegundos);

    return 0;
}
