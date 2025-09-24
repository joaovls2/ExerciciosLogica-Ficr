#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "pt_BR.UTF-8");
	int valor;
	
	printf("Digite um valor: ");
	scanf("%d", &valor);
	
	if (valor % 2 == 0) {
		printf("O valor digitado e par!");
	} else {
		printf("O valor digitado e impar!");
	}
	
	
	return 0;
}