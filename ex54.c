#include <stdio.h>
#include <locale.h>

int main() {
	
	int vector[10];
	int i;
	int cont = 0;
	
	for(i = 0; i < 10; i++) {
		printf("Digite o %do numero: ", i+1);
		scanf("%d", &vector[i]);
		
		if(vector[i] > 5.50) {
			cont++;
		}
	}
	
	printf("\n");
	printf("QUANTOS NUMEROS ACIMA DA MEDIA (5.50): %d", cont);
	printf("\n");
	
	return 0;
}