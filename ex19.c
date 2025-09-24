#include <stdio.h>
#include <locale.h>

int main() {
 
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int n1, n2, n3, maior;
	
	printf("Escreva o primeiro valor: ");
	scanf("%d", &n1);
	printf("Escreva o segundo valor: ");
	scanf("%d", &n2);
	printf("Escreva o terceiro valor: ");
	scanf("%d", &n3);
	
	if (n1 > n2 && n1 > n3) {
		maior = n1;
		printf("O maior e o primeiro valor (%d)!", n1);
	} else if (n2 > n1 && n2 > n3) {
		maior = n2;
		printf("O maior e o segundo valor (%d)!", n2);
	} else if (n3 > n1 && n3 > n2) {
		maior = n3;
		printf("O maior e o terceiro valor (%d)!", n3);
	}
	
	return 0;
}