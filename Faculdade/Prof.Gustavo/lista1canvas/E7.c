#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, x2, y2;

    printf("Digite as coordenadas do primeiro vetor (x y): ");
    scanf("%lf %lf", &x1, &y1);

    printf("Digite as coordenadas do segundo vetor (x y): ");
    scanf("%lf %lf", &x2, &y2);

    double produtoEscalar = x1 * x2 + y1 * y2;
    double moduloVetor1 = sqrt(x1 * x1 + y1 * y1);
    double moduloVetor2 = sqrt(x2 * x2 + y2 * y2);
    double anguloRadianos = acos(produtoEscalar / (moduloVetor1 * moduloVetor2));
    double produtoVetorial = x1 * y2 - x2 * y1;

    printf("O resultado do produto escalar é: %.2lf\n", produtoEscalar);
    printf("O ângulo entre os vetores é (em graus): %.2lf\n", anguloRadianos * (180.0 / M_PI));
    printf("O resultado do produto vetorial é (componente z): %.2lf\n", produtoVetorial);

    return 0;
}
