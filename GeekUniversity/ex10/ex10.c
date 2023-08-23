//km/h para m/s

#include <stdio.h>
#include <stdlib.h>

int main(){
	float kmh,ms;
	printf("Digite a velocidade em km/h: ");
	scanf("%f",&kmh);
	ms = kmh/3.6;
	printf("Aqui esta sua velocidade em m/s: %.2f",ms);
	return 0;
}
