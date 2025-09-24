#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese, Brazil");
	int n1, n2, soma, prod, div;
	
	printf("Digite um número: ");
	scanf("%d", &n1);
	printf("Digite outro número: ");
	scanf("%d", &n2);
	soma = n1 + n2;
	prod = n1 * n2;
	div = n1 / n2;
	printf("A soma entre %d e %d é: %d\nO produto é: %d\nE a divisão é: %d", n1, n2, soma, prod, div);
		
	return 0;
}