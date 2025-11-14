#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "pt_BR.UTF-8");
	
	float x, i;
	float s = 0.0;
	
	printf("Digite um valor: ");
	scanf("%f", &x);
	
	for(i = 1; i <= x; i++) {
		s += 1.0 / x - i;
	}
	
	printf("S vale: %.2f", s);
	
	return 0;
}