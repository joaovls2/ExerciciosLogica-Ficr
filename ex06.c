#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese, Brazil");
	float raio, area;
	
	printf("Digite o raio do cículo: ");
	scanf("%f", &raio);
	area = 3.14 * (raio * raio);
	printf("A área do círculo é: %f", area);
		
	return 0;
}