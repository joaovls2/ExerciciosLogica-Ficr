#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "pt_BR.UTF-8");
	int n1, n2, maior;
	
	printf("Digite o peimeiro valor: ");
	scanf("%d", &n1);
	printf("Digite o segundo valor: ");
	scanf("%d", &n2);
	
	if (n1 == n2) {
		printf("Os valores sao iguais!");
	} else {
		if (n1 > n2) {
			maior = n1;
			printf("Os valores sao diferentes!\nO primeiro valor (%d) e maior que o segundo (%d).", maior, n2);
		} else {
			maior = n2;
			printf("Os valores sao diferentes!\nO segundo valor (%d) e maior que o primeiro (%d).", maior, n1);
		}
		
	}
	
	return 0;
}