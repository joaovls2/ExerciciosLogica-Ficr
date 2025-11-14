#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "pt_BR.UTF-8");
	
	int vector[10];
	int i, produto;
	const int p = 5;
	
	for(i = 0; i < 10; i++) {
		printf("Digite o %do numero: ", i+1);
		scanf("%d", &vector[i]);
	}
	
	printf("\n");
	printf("IMPARES x CONSTANTE\n");
	printf("\n");
	
	for(i = 0; i < 10; i++) {
		if(vector[i] % 2 == 1) {
			produto = vector[i] * p;
			printf("%d x 5 = %d\n", vector[i], produto);
		}
	}
	
	printf("\n");
	
	return 0; 
}