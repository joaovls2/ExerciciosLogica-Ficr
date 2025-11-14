#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "pt_BR.UTF-8");
	
	int i;	
	
	for(i = 14; i <= 30; i++) {
		if(i % 2 == 0) {
			printf("%d ", i);
		}
	}
	
	printf("\n");
	
	return 0;
}