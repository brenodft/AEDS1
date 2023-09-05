#include <stdio.h>
#include <math.h>

int main(){
    printf("Digite tres numeros: ");
    int a,b,c,pitagoras;
    scanf("%d %d %d",&a,&b,&c);
    if (pow(a,2)+pow(b,2) == pow(c,2) || pow(b,2)+pow(c,2) == pow(a,2) || pow(c,2)+pow(a,2) == pow(b,2) ){
        printf("\nTriangulo retangulo.");
    }else{
        printf("\nNão é retangulo.");
    }
    return 0;
}