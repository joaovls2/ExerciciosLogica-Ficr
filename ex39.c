#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "pt_BR.UTF-8");
	
	int i;
	int ant = 1;
	int atual = 1;
	int prox;
	
	printf("1  1 ");
	
	for(i = 0; i <= 11; i++) {
		
		prox = ant + atual;
		ant = atual;
		atual = prox;
		
		printf(" %d  ", prox);
	}
	
	
	return 0;
}
