#include <stdio.h>

int main() {
    int vermelho, verde, azul;

    printf("Insira o valor da componente vermelha (0-255): ");
    scanf("%d", &vermelho);

    printf("Insira o valor da componente verde (0-255): ");
    scanf("%d", &verde);

    printf("Insira o valor da componente azul (0-255): ");
    scanf("%d", &azul);

    if (vermelho < 0 || vermelho > 255 || verde < 0 || verde > 255 || azul < 0 || azul > 255) {
        printf("Valores fora do intervalo válido (0-255).\n");
        return 1;
    }

    printf("Cor RGB: #%02X%02X%02X\n", vermelho, verde, azul);

    return 0;
}
