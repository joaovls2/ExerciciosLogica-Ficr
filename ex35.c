#include <stdint.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "pt_BR.UTF-8");
	
	int i, n;
	int soma = 0;
	
	printf("Digite ate qua numero voce quer que seja calculado: ");
	scanf("%d", &n);
	
	for(i = 1; i <= n; i++) {
 		soma += i;
	}
	
	printf("H vale: %d", soma);
	
	return 0;
}