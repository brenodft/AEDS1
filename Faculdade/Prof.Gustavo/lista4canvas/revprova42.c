#include <stdio.h>

int main(){
    int vet[10];
    for(int i = 0; i<10; i++){
        printf("Digite um numero (%d) :",i+1);
        scanf("%d",&vet[i]);
    }
    printf("Agora digite outro numero: ");
    int num,count=0;
    scanf("%d",&num);
    printf("Posicoes: ");
    for(int i = 0;i<10;i++){
        if(vet[i] == num){
            count++;
            printf("%d ",i);
        }
    }
    printf("\nO numero %d aparece %d vezes",num,count);
    return 0;
}