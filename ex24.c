#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "pt_BR.UTF-8");
	char classe, classe1, classe2, classe3;
	float consumo, tarifa, icms, vf, vp;
	
	classe1 = 'A';
	classe2 = 'B';
	classe3 = 'C';
	
	printf("Qual e a classe consumidora? (A, B, C) ");
	scanf("%c", &classe);
	printf("Quanto foi o consumo em quilowatts/hora? ");
	scanf("%f", &consumo);
	
	if (classe == 'A' || classe == 'a') {
        tarifa = 0.5;
    } else if (classe == 'B' || classe == 'b') {
        tarifa = 0.8;
    } else if (classe == 'C' || classe == 'c') {
        tarifa = 1.0;
    } else {
        printf("Classe consumidora inválida!\n");
        return 1; 
    }
	
	vf = (consumo * tarifa);
	icms = (0.3 * vf);
	vp = vf + icms;
	
	printf("\nResumo da conta de energia:\n");
    printf("Classe consumidora: %c\n", classe);
    printf("Consumo: %.2f kWh\n", consumo);
    printf("Valor do fornecimento: R$ %.2f\n", vf);
    printf("ICMS (30%%): R$ %.2f\n", icms);
    printf("Valor a pagar: R$ %.2f\n", vp);
	
	return 0;
}