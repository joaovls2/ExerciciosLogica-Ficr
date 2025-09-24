#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese, Brazil");
	float raio, alt, area, volume, auc, vuc;
	
	printf("Digite o raio do cilindro: ");
	scanf("%f", &raio);
	printf("Digite a altura do cilindro: ");
	scanf("%f", &alt),
	area = 2 * 3.14 * raio * (raio + alt);
	volume = 3.14 * (raio * raio) * alt;
	auc = area / 3.14;
	vuc = volume / 3.14;
	printf("A área do cilindro é: %f\nE em unidades cúbicas é: %f\nO volume é: %f\nE em unidades cúbicas é: %f", area, auc, volume, vuc);
		
	return 0;
}