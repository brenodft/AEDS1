#include <stdio.h>

void soma(int v1[2],int v2[2],int v3[3]){
    for(int i = 0; i<2; i++){
        v3[i] = v1[i] + v2[i];
    }
    printf("A soma desses vetores e: ");
    for(int j = 0; j<2; j++){
    printf("%d ",v3[j]);
    }
}

int main(){
   int vet1[2] = {1,2},vet2[2] = {3,4},vet3[2];//coloquei 2 so pra ficar menor, mas poderia ser qualquer valor, ou uma variavel 
   soma(vet1,vet2,vet3);
   return 0;
}