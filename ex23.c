#include <stdio.h>
#include <locale.h>
#include <math.h> 

int main() {

	setlocale(LC_ALL, "pt_BR.UTF-8");
    float a, b, c, D, x1, x2;

 
    printf("Digite o valor de a: ");
    scanf("%f", &a);
    printf("Digite o valor de b: ");
    scanf("%f", &b);
    printf("Digite o valor de c: ");
    scanf("%f", &c);

    D = b * b - 4 * a * c;

    if (D < 0) {
        printf("Nao ha solucao real. O discriminante (D) e negativo.\n");
    } else if (D == 0) {
        x1 = -b / (2 * a);
        printf("A equacao tem uma unica raiz: x1 = x2 = %.2f\n", x1);
    } else {
        x1 = (-b + sqrt(D)) / (2 * a);
        x2 = (-b - sqrt(D)) / (2 * a);
        printf("As duas raizes reais e distintas sao:\n");
        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f\n", x2);
    }

    return 0;
}
