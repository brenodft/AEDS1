#include <stdio.h>

int main() {
    printf("Digite um numero: ");
    int num;
    scanf("%d", &num);

    if (num < 2) {
        printf("Nenhum primo encontrado, pois o numero deve ser maior ou igual a 2.\n");
        return 0;
    }

    int primo[num + 1];
    int p = 0; 

    for (int i = 2; i <= num; i++) {
        int e_primo = 1;

        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                e_primo = 0; 
                break;
            }
        }

        if (e_primo) {
            primo[p] = i;
            p++;
        }
    }

    printf("Os numeros primos sao: ");
    for (int g = 0; g < p; g++) {
        printf("%d ", primo[g]);
    }

    printf("\n");
    return 0;
}
