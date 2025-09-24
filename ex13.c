#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "pt_BR.UTF-8");
	float precofab, precofinal, imposto, porcrev;
	
	printf("Qual o preco de fabrica? ");
	scanf("%f", &precofab);
	imposto = (precofab * 45) / 100;
	porcrev = (precofab * 28) / 100;
	precofinal = precofab + imposto + porcrev;
	printf("O preco final sera: R$ %.3f", precofinal);
	
	return 0;
}