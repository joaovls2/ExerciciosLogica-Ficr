#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "pt_BR.UTF-8");
	
	int i, x;
	
	for(i = 15; i <= 30; i++) {
		x = i * i;
		printf("%d ", x);
		
	}
	
	
	
	return 0;
	
}