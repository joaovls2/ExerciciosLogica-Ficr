#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "pt_BR.UTF-8");
	
	double h, p;
	int s;
	
	printf("Digite a altura (em metros): ");
	scanf("%lf", &h);
	printf("Digite o sexo [1=feminino, 2=masculino]: ");
	scanf("%d", &s);
	
	if(h < 0.0) {
 	 	 printf("Altura invalida! Digite uma altura positiva.");
	} else if(s == 1) {
		p = 62.1 * h - 44.7;
		printf("Peso ideal para esse sexo e altura: %.2f", p);
	} else if (s == 2) {
		p = 72.7 * h - 58;
		printf("Peso ideal para esse sexo e altura: %.2f", p);
	} else {
        printf("Sexo inválido! Use 1 para feminino ou 2 para masculino.\n");
    }
	
	
	return 0;
}