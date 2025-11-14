#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "pt_BR.UTF-8");
	
	int vector[10];
	int i;	
	int soma = 0;
	
	for(i = 0; i < 10; i++) {
		printf("Digite o %do numero: ", i+1);
		scanf("%d", &vector[i]);
		soma += vector[i];
	}
	
	printf("SOMA: %d", soma);
	
	return 0;
}