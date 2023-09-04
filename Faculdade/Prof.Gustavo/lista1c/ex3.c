#include <stdio.h>

int main(){
    float vol,raio,altura;
    printf("Digite o raio e a altura do cone: ");
    scanf("%f %f",&raio,&altura);
    vol = ((3.14*raio*raio)*altura)/3;
    printf("\nO volume do cone é igual a %.2f",vol);
    return 0;
}