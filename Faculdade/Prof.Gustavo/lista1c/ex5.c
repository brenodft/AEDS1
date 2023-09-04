#include <stdio.h>

int main(){
    printf("Digite os 3 eixos do elipsoide: ");
    float a,b,c,vol;
    scanf("%f %f %f",&a,&b,&c);
    vol = (4/3)*3.14*a*b*c;
    printf("\nVolume do elipsoide: %.2f",vol);
    return 0;
}