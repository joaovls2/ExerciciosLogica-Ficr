#include <stdio.h>
#include <locale.h>

int main() {
	
	float i;
   	float s = 1;
	
	for(i = 2.0; i <= 10.0; i++) {
		s += 1.0 / i;	
	}
		
	printf("S vale: %.4f", s);
	
	return 0;
}