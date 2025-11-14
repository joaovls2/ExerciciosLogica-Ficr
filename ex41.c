#include <stdio.h>
#include <locale.h>

int main() {
	
	int i, pot;
	
	pot = 1;
	
	for(i = 1; i <= 3; i++) {
		pot = pot * 2;
		printf("2 elevado a %d = %d\n", i, pot);
	}
	
	
	
	
	return 0;
}