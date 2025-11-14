#include <stdio.h>
#include <locale.h>

int main() {
	
	int i, k, n;
	int pot;
	
	printf("Digite o numero da base: ");
	scanf("%d", &k);
	printf("Digite o expoente: ");
	scanf("%d", &n);
	
	pot = k;
	
	for(i = 1; i < n; i++) {
		pot = pot * k;
	}
	
	printf("RESULTADO: %d", pot);
	
	
	return 0;
}