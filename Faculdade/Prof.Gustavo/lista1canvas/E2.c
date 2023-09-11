#include <stdio.h>

int main(){
    printf("Informe a area da base e a altura da piramida:  ");
    int ab,h,vol;
    scanf("%d %d",&ab,&h);
    vol = (ab*h)/3;
    printf("\nVolume: %d",vol);
    return 0;
}