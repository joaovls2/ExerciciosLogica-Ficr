#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "pt_BR.UTF-8");
	int valor;
	
	printf("Digite um valor inteiro: \n");
	scanf("%d", &valor);
	
	if (valor >= 0) {
		printf("O valor digitado e positivo!\n%d", valor);
	} else {
		printf("O valor digitado e negativo!\n%d", valor*-1);
	}
	
	
	
	return 0;
}