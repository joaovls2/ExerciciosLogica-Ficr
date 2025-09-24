#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese, Brazil");
	float sal, totvendas, com;
	
	printf("Quanto é o salário fixo? ");
	scanf("%f", &sal);
	printf("QUanto foi o total de vendas efetuadas pelo vendedor neste mês (Em dinheiro)? ");
	scanf("%f", &totvendas);
	com = sal + (15 * totvendas) / 100;
	printf("O salário fixo é: %.2f\nNo final do mês será recebido: %.2f", sal, com);
	
	return 0;
}