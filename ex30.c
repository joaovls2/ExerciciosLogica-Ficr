#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "pt_BR.UTF-8");
	
	int i, x;
	int y = 0;
	
	for(i = 1; i <= 10; i++) {
		printf("Digite a %da idade: ", i);
		scanf("%d", &x);
		if(x >= 18) {
			y++;
		}
	}
	
	printf("Total de pessoas maiores de idade: %d", y);
	
	
	return 0;
}