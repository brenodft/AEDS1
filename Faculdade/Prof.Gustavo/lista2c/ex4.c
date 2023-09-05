#include <stdio.h>

int main(){
    int a,b,c,eq,x,y;
    printf("Digite os coeficientes a,b e c: ");
    scanf("%d %d %d",&a,&b,&c);
    printf("\nDigite os valores dos pontos x e y: ");
    scanf("%d %d",&x,&y);
    eq = (a*x*x) + b*x + c;
    if (y==eq){
        printf("\nOs pontos x e y pertencem a parabola");
    } else{
        printf("\nOs pontos x e y não pertencem a parabola");
    }
    return 0;
}