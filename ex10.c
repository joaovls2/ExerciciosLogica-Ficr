#include <stdio.h>
#include <locale.h>

int main(){
	
	// Eii, professor, até eu chegar na resulução, eu quebrei cabeça demais, viu kk
	
	setlocale(LC_ALL, "Portuguese, Brazil");
	int valor, duz, cem, cinq, vin, dez, cin, dois;
	
	printf("-------------------------------------------------------------------------------------------\n");
	printf("As cédulas disponíveis neste caixa são: R$2 | R$5 | R$10 | R$20 | R$50 | R$100 | R$200\n");
	printf("-------------------------------------------------------------------------------------------\n");
	printf("Quanto você quer sacar? ");
	scanf("%d", &valor);
	
	if (valor / 200) {
		duz = valor / 200;
		valor = valor % 200;
		} else {
			duz = 0;
		}
		
	if (valor / 100) {
		cem = valor / 100;
		valor = valor % 100;
		} else {
			cem = 0;
		}
	
	if (valor / 50) {
		cinq = valor / 50;
		valor = valor % 50;
		} else {
			cinq = 0;
		} 
	if (valor / 20) {
		vin = valor / 20;
		valor = valor % 20;
		} else {
			vin = 0;
		} 
    if (valor / 10) {
		dez = valor / 10;
		valor = valor % 10;
		} else {
			dez = 0;
		}
    if (valor / 5) {
		cin = valor / 5;
		valor = valor % 5;
		} else {
			cin = 0;
		}
    if (valor / 2) {
		dois = valor / 2;
		} else {
			dois = 0;
		}
	
	printf("Cédulas de 200: %d\nCédulas de 100: %d\nCédulas de 50: %d\nCédulas de 20: %d\nCédulas de 10: %d\nCédulas de 5: %d\nCédulas de 2: %d\n", duz, cem, cinq, vin, dez, cin, dois);
	
	return 0;
}