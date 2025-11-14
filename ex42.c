#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
	
	int x, a, s, y, z, i, pot;
	
	printf("Digite o numero de x: ");
	scanf("%d", &x);
	printf("Digite o valor de a: ");
	scanf("%d", &a);
	
	y = 20;
	z = 0;
	
	for(i = 1; i <= 20; i++) {
		y--;
		z++;
		pot = pow(x, i);
		
		s += (i / a - z) * (y / pot);
	}
 
	printf("RESULTADO: %d", s);	
	
	return 0;
}