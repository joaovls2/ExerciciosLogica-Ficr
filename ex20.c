#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "pt_BR.UTF-8");
	int n1, n2, n3, temp; 
	
	printf("Escreva o primeiro valor: ");
	scanf("%d", &n1);
	printf("Escreva o segundo valor: ");
	scanf("%d", &n2);
	printf("Escreva o terceiro valor: ");
	scanf("%d", &n3);
	
	if (n1 > n2) {
		temp = n1;
		n1 = n2;
		n2 = temp;
	}
	if (n1 > n3) {
		temp = n1;
		n1 = n3;
		n3 = temp;
	}
	if (n2 > n3) {
		temp = n2;
		n2 = n3;
		n3 = temp;
	}
	
	printf("Os tres valores em ordem crescente ficara assim: %d, %d e %d", n1, n2, n3);
	
	return 0;
}