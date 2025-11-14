#include <stdio.h>
#include <locale.h>

int main() {
	
	int i;
	int m = 0;
	int homem = 0;
	float h = 0.0;
	char s;
	float maior = 0.0;
	float menor = 0.0;
	float soma = 0.0;
	float media = 0.0;
	
	for(i = 1; i <= 15; i++) {
		printf("Digite a altura (em metros): ");
		scanf("%f", &h);
		printf("Digite o sexo [M, F]: ");
		scanf("%c", &s);
		
		if(h > maior) {
			maior = h;
		} else if(menor < h) {
			menor = h;
		}
		
		if(s == 'f') {
			m++;
			soma += h;
		}
		
		if(s == "M") {
			homem++;
		}
	}
	
	media = soma / m;
	
	printf("MAIOR ALTURA: %.2f\n", maior);
	printf("A MENOR ALTURA: %.2f\n", menor);
	printf("MEDIA DE ALTURA DAS MULHERES: %%.2f", media);
	printf("QUANTIDADE DE HOMENS: %d", homem);
	
	
	
	return 0;
}