#include <stdio.h>
#include <locale.h>

int main() {
	
	int i = 0;
	int n = 0;
	int p = 0;
	char resp;
	
	printf("Qual tabuada voce quer? ");
	scanf("%d", &n);
	
	while(resp == "s") {
		for(i = 1; i <= 10; i++) {
		p = n * i;
		printf("%d x %d = %d\n", n, i, p);
	}	
	
	printf("Quer continuar? [s/n]");
	scanf("%c", &resp);
	}
	
	
	return 0;
}