#include <stdio.h>
#include <locale.h>

float celsius(int f) {
	return (5.0 / 9.0) * (f - 32);
}

int main() {
	
	setlocale(LC_ALL, "pt_BR.UTF-8");
	
	int f = 50;
	float c = 0.0;
	
	for(f = 50; f <= 65; f++) { 
		printf("%d f ----- %.2f\n", f, celsius(f));
		
	}
	
	
	
	return 0;
}