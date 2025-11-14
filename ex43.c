#include <stdio.h>
#include <locale.h>

int main() {
 	
	float x = 0.0;
	int tempo = 0;
	float massa = 0.0;
	
	
	printf("Digite a massa inicial [g]: ");
	scanf("%f", &massa);

	x = massa;
	
	while(x > 0.5) {
		x = x / 2;
		tempo += 50;
	}
	
	printf("Massa inicial: %.2f\n", massa);
	printf("Massa final: %.2f\n", x);
	printf("Tempo necessario: %ds\n", tempo);
	
	
	
	return 0;
}