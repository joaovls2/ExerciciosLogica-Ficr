#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese, Brazil");
	int n, ant, suc;
	
	printf("Digite um número: ");
	scanf("%d", &n);
	ant = n - 1;
	suc = n + 1;
	printf("O antecessor de %d é: %d\n", n, ant);
	printf("o sucessor de %d é: %d\n", n, suc);
		
	return 0;
}
