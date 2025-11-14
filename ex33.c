#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "pt_BR.UTF-8");
	
	int i;
	int soma, x = 0;

	float media;
	
	for(i = 13; i <= 73; i++) {
		if(i % 2 == 0) {
			soma = soma + i;
			x = x + 1;
		}
	}
	
	media = soma / x;
	
	printf("A media dos numeros pares entre 13 e 73 e: %.2f", media);
	
	return 0;
}