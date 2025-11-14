#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "pt_BR.UTF-8");
	
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