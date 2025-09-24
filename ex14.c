#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "pt_BR.UTF-8");
	int valor;
	
	printf("Digite um valor interio: ");
	scanf("%d", &valor);
	
	if (valor == 0) {
		printf("O valor digitado e zero!");
	} else if (valor > 0) {
		printf("O valor digitado e positivo!");
	} else {
		printf("O valor digitado e negativo!");
	}
	
	return 0;
}