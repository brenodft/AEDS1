#include <stdio.h>

int main(){
    printf("Digite o valor dos lados a,b e c:");
    float a,b,c,diagonal;
    scanf("%f %f %f",&a,&b,&c);
    diagonal = (a*a)+(b*b)+(c*c);
    printf("\nA diagonal é igual a %.2f",diagonal);
    return 0;
}