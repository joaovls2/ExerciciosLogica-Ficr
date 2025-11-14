#include <stdio.h>
#include <locale.h>

int main() {
	
	int V[10];
	int i;
	int maior = 0;
	int pos = 0;
	
	for(i = 0; i < 10; i++) {
		printf("Digite o %do numero: ", i+1);
		scanf("%d", &V[i]);
		
		if(V[i] > maior) {
			maior = V[i];
			pos = i;
		}
	}
	
	printf("\n\n");
	printf("MAIOR NUMERO: %d\n", maior);
	printf("POSICAO: %d", pos+1);
	
	
	
	
	return 0;
}