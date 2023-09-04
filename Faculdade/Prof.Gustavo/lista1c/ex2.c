#include <stdio.h>
int main(){
    float area,raio;
    printf("Digite o valor do raio: ");
    scanf("%f",&raio);
    area = 3.14*raio*raio;
    printf("\nA área é igual a %.2f",area);
    return 0;
}