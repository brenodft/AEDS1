#include <stdio.h>
#include <math.h>

int main(){
    printf("Digite os valores de a,b e c: ");
    float a,b,c,delta,bhaskara1,bhaskara2;
    scanf("%f %f %f",&a,&b,&c);
    delta = (b*b) - 4*a*c;
    if (a != 0){
    bhaskara1 = (-b + pow(delta, 1/2))/2*a;
    bhaskara2 = (-b - pow(delta, 1/2))/2*a;

    printf("\nDados da equação: \na = %.2f\nb = %.2f\nc = %.2f\nDelta = %.2f\nA resposta da equação é: x`= %.2f e x``= %.2f",a,b,c,delta,bhaskara1,bhaskara2);
    } else {
        printf("\nValor inexistente!");
    }
    return 0;
}