#include <stdio.h>
#include <math.h>

int main(){
    printf("Digite 5 valores");
    float a,b,c,d,e,geom,arit,num;
    scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
    arit = (a+b+c+d+e)/5;
    num = a*b*c*d*e;
    geom = pow(num,1/5);
    printf("A media aritmética é igual a %.2f, já a média geometrica é igual a %.2f",arit,geom);
    return 0;
}