#include <stdio.h>
#include <locale.h>

int main() {
	
	int n = 0;
	int contador = 0;
	int soma = 0;
	int media;
	
	while(n >= 0) {
		printf("Digite um numero: ");
		scanf("%d", &n);
		
		if (n < 0)
          break; 
		soma += n;
		contador += 1;
	}
	
	if (contador > 0) {
        media = soma / contador;
        printf("SOMA: %d\nMEDIA: %d\n", soma, media);
    } else {
        printf("Nenhum número positivo foi digitado.\n");
    }
	
	return 0;
}