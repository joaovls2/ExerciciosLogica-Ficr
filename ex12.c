#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "pt_BR.UTF-8");
	int media1, media2;
	float somamedias, medmedias;
	
	media1 = (4 + 5 + 6) / 3;
	media2 = (7 + 8 + 9) / 3;
	somamedias = media1 + media2;
	medmedias = somamedias / 2;
	printf("%.1f\n", somamedias);
	printf("%.1f", medmedias);
	
	return 0;
}