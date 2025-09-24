#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese, Brazil");
	int n1, n2, div, res;
	
	printf("Digite um número: ");
	scanf("%d", &n1);
	printf("Digite outro número: ");
	scanf("%d", &n2);
	div = n1 / n2;
	res = n1 % n2;
	printf("A divisão entre %d e %d é: %d\nO resto é: %d", n1, n2, div, res);
		
	return 0;
}
