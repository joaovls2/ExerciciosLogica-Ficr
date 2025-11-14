#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "pt_BR.UTF-8");
	
	int i, x;
	
	for(i = 1; i <= 5; i++) {
		printf("Digite o %do numero: ", i);
		scanf("%d", &x);
		if(x >= 100 && x <= 200) {
			printf("Voce digitou um numero entre 100 e 200\n");
		} else {
			printf("Voce digitou um numero fora da faixa entre 100 e 200\n");
		}
		printf("\n");
	}
	
	return 0;
}