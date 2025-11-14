#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "pt_BR.UTF-8");
	
	int i = 0;
	int x = 2;
	int n;
	int f = 1;
	
	printf("Voce quer o fatorial de qual numero? ");
	scanf("%d", &n);
	
	for(i = 1; i < n; i++) {
		f = f * x;
		x++;
	}
	
	if(n == 0) {
		f = 1;
	}
	
	printf("FATORIAL DE %d: %d", n, f);
	
	return 0;
}