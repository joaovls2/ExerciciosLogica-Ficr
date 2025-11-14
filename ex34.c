#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "pt_BR.UTF-8");
	
	int i, x;
	int s = 0;
	int n = 0;
	
	for(i = 1; i <= 10; i++) {
		printf("Digite o %do valor: ", i);
		scanf("%d", &x);
		if(x > 10 && n < 50) {
			s++;
		} else {
			n++;
		}
	} 
	
	printf("Foram digitados %d valores no intervalor de 10...50, e %d nao esta neste intervalo!", s, n);
	
	
	return 0;
}