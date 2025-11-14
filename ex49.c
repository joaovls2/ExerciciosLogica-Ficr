#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "pt_BR.UTF-8");
	
	int i = 0;
	int fil = 0;
	float soma2 = 0.0;
	float media2 = 0.0;
	float por = 0.0;
	float soma1 = 0.0;
	float media1 = 0.0;
	float maior = 0.0;
	float sal = 0.0;
	float x = 0.0;
		
	while(1) {
		printf("Digite o salario da pessoa %d (-1 para fechar o programa): ", i+1);
		scanf("%f", &sal);
		
		if(sal == -1){
			break;
		}
		
		printf("Digite a quantidade de filhos da pessoa %d: ", i+1);
		scanf("%d", &fil);
		
		i++;
		soma1 += sal;
		soma2 += fil;
		
		if(sal > maior) {
			maior = sal;
		}
		
		if(sal < 1000.0) {
			x += 1;
		}
	}
	media1 = soma1 / i;
	media2 = soma2 / i;
	por = (x / i) * 100;
	 
 	printf("\n");
	printf("MEDIA DE SALARIO: %.2f\n", media1); 
	printf("MEDIA DE NUMERO DE FILHOS: %.2f\n", media2);
	printf("MAIOR SALARIO: %.2f\n", maior);
	printf("PORCENTAGEM DE SALARIOS ABAIXO DE $1000.00: %.2f%%\n", por);  
	
	return 0;
} 