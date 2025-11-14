#include <stdint.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "pt_BR.UTF-8");
	
	int i;
	int x = 0;
	
	for(i = 1; i <= 100; i++) {
		x += i;
		printf("%d ", x);
	}
	
	return 0;
}