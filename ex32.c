#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "pt_BR.UTF-8");
	
	int i, n;
	int maior = 0;
	
	for(i = 1; i <= 5; i++) {
		printf("Digite o %do numero: ", i);
		scanf("%d", &n);
		if(n > maior) {
			maior = n;
		}		
	}
	
	printf("O maior valor foi: %d", maior);
	
	return 0;
}