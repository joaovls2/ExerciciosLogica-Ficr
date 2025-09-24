#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese, Brazil");
	int n1, n2, prod;
	
	printf("Digite um número: ");
	scanf("%d", &n1);
	printf("Digite outro número: ");
	scanf("%d", &n2);
	prod = n1 * n2;
	printf("O produto entre %d e %d é: %d", n1, n2, prod);
	
	return 0;
}