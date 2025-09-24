#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "pt_BR.UTF-8");
	float precofinal;
	int quant;
	
	printf("Quantas macas foram compradas? ");
	scanf("%d", &quant);
	
	if (quant < 12) {
		precofinal = quant * 0.30; 
		printf("O valor final das %d macas sera: R$ %.2f", quant, precofinal);
	} else {
		precofinal = quant * 0.25;
		printf("O valor final das %d macas sera: R$ %.2f", quant, precofinal);
	}
	
	return 0;
}