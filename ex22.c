#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "pt_BR.UTF-8");
	int n1, n2, soma, sub, mult, div;
	
	printf("Escreva o primeiro valor: ");
	scanf("%d", &n1);
	printf("Escreva o segundo valor: ");
	scanf("%d", &n2);
	
	soma = (n1+ n2);
	sub = (n1 - n2);
	mult = (n1 * n2);
	div = (n1 / n2);
	
	printf("Soma: %d\nSubtracao: %d\nMultiplicacao: %d\nDivisao: %d", soma, sub, mult, div);
	
	
	return 0;
}