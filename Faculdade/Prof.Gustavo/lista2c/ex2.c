#include <stdio.h>

int main(){
    int x1,x2,y1,y2,difx,dify;
    printf("Digite a primeira coordenada (x,y): ");
    scanf("%d %d",&x1,&x2);
    printf("\nDigite a segunda coordenada (x,y): ");
    scanf("%d %d",&x2,&y2);
    difx = x1-x2;
    if (difx < 0){
        difx = difx * -1;
    }
    dify = y1-y2;
    if (dify < 0){
        dify = dify * -1;
    }
    printf("\nA distancia entre os pontos é: x= %d e y= %d",difx,dify);
    return 0;
}