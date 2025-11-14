#include <stdio.h>
#include <locale.h>

int main() {
	
	float i;
	float x = 3.0;
	float s = 1.0;
	
	for(i = 2; i <= 50; i++) {
		x += 2;
		s += i / x;
	}
	
	printf("S vale: %.2f", s);
	
	return 0;
}