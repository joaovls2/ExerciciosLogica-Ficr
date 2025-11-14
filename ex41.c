#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "pt_BR.UTF-8");
	
	int i, pot;
	
	pot = 1;
	
	for(i = 1; i <= 3; i++) {
		pot = pot * 2;
		printf("2 elevado a %d = %d\n", i, pot);
	}
	
	
	
	
	return 0;
}