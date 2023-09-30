#include <stdio.h>
#include <math.h>

int main(){
    printf("Digite os valores a,b,c: ");
    float a,b,c,cos;
    scanf("%f %f %f",&a,&b,&c);
    if(a > fabs(b-c)){
        if(a>b && a>c){
            cos = ((b*b)+(c*c)-(a*a))/2*b*c;
            if (cos > 0){
                printf("Triangulo Acutangulo.\n");
            } else if(cos<0){
                printf("Triangulo Obtusangulo.\n");
            } else {
                printf("Triangulo Reto.\n");
            }
        } else if(b>a && b>c){
            cos = ((a*a)+(c*c)-(b*b))/2*a*c;
            if (cos > 0){
                printf("Triangulo Acutangulo.\n");
            } else if(cos<0){
                printf("Triangulo Obtusangulo.\n");
            } else {
                printf("Triangulo Reto.\n");
            }
        } else if(c>a && c>b){
            cos = ((a*a)+(b*b)-(c*c))/2*a*b;
            if (cos > 0){
                printf("Triangulo Acutangulo.\n");
            } else if(cos<0){
                printf("Triangulo Obtusangulo.\n");
            } else {
                printf("Triangulo Reto.\n");
            }
        }
        if(a == b && a==c){
            printf("Triangulo Equilatero.");
        } else if(a == b || a ==c || c == b){
            printf("Triangulo Isosceles.");
        } else {
            printf("Triangulo Escaleno.");
        }
    }
    return 0;
}