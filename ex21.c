#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "pt_BR.UTF-8");
	int n1, n2, n3; 
	
	printf("Escreva o primeiro valor: ");
	scanf("%d", &n1);
	printf("Escreva o segundo valor: ");
	scanf("%d", &n2);
	printf("Escreva o terceiro valor: ");
	scanf("%d", &n3);
	
	if ((n2 + n3) > n1 && (n1 + n3) > n2 && (n1 + n2) > n3) {
		if (n1 == n2 && n2 == n3) {
			printf("Pode ser os lados de um triangulo EQUILATERO ou ISOSCELES!");
		} else if (n1 == n2 || n1 == n3 || n2 == n3) {
			printf("Pode ser os lados de um triangulo ISOSCELES!");
		} else if (n1 != n2 && n1 != n3 && n2 != n3) {
			printf("Pode ser os lados de um triangulo ESCALENO!");
		}
	} else {
		printf("Nao pode formar um triangulo!");
	}
	
	return 0;
}