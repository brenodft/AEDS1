#include <stdio.h>

int main(){
    printf("Digite o seu salario: ");
    float salario, irpf,inss;
    scanf("%f",&salario);

    if (salario <= 2112){
        irpf = salario * 0;
    } else if( salario <= 2826.65){
        irpf = salario * 0.075;
    } else if( salario <= 3751.05){
        irpf = salario * 0.15;
    } else if( salario <=4664.68){
        irpf = salario * 0.225;
    } else{
        irpf = salario * 0.275;
    }
    if(salario <= 1320){
        inss = salario * 0.075;
    } else if(salario<= 2751.29){
        inss = salario * 0.09;
    } else if(salario <= 3856.94){
        inss = salario * 0.12;
    } else if(salario <= 7507.49){
        inss = salario * 0.14;
    } else {
        inss = 7507.49 * 0.14;
    }
    printf("\nIRPF: %.2f\nINSS: %.2f",irpf,inss);
    return 0;
}