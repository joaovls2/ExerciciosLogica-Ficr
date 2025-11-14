#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "pt_BR.UTF-8");
	
	float soma = 0.0;
	float pe = 0.0;
	int resp;
	
	while (1) {
        printf("Digite o preço da compra (0 para encerrar): ");
        scanf("%f", &pe);

        if (pe == 0)
            break;

        if (pe < 0) {
            printf("Preço inválido! Digite um valor positivo.\n");
            continue;
        }

        soma += pe;
    }

    if (soma == 0) {
        printf("Nenhuma compra registrada.\n");
        return 0;
    }

	printf("\n");
	if(pe == 0) {
			printf("A soma de tudo deu $ %.2f !\nAgora escolha a condicao de pagamento.\n", soma);
			printf("\n");
			printf("1 - A vista em dinheiro ou cheque, com 10% de desconto.\n");
			printf("2 - A vista com cartao de credito, com 5% de desconto\n");
			printf("3 - Em 2 vezes, preco normal de etiqueta sem juros\n");
			printf("4 - Em 3 vezes, preco de etiqueta com acrescimo de 10%\n");
			scanf("%d", &resp);
	}		
    
    printf("\n");
    
	switch(resp){
	case 1:
		soma -= soma * 0.10;
		printf("O valor final sera: $ %.2f", soma);
		break;
	case 2:
		soma -= soma * 0.05;
		printf("O valor final sera: $ %.2f", soma);
		break;
	case 3:
		printf("O valor final sera: $ %.2f", soma);
		break;
	case 4:
		soma += soma * 0.10;
		printf("O valor final sera: $ %.2f", soma);
		break;
	default:
		break;
	}			
			
	return 0;
}