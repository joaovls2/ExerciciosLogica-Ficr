#include <stdio.h>
#include <locale.h>

int main() {
	
	int B[3][3];
	int i, j;
	int soma, somaMaior, pos = 0;
	int maior = -999999;
	
	printf("Digite os valores da matriz B (3x3):\n");

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }
    
    for(i = 0; i < 3; i++) {
        soma = 0; 

        for(j = 0; j < 3; j++) {
            soma += B[i][j];
        }
        if(soma > maior) {
			maior = soma;
			pos = i;
			somaMaior = soma;
		}
	}
    
	printf("\nMatriz digitada:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }
	
	printf("\n\n");
	printf("LINHA QUE POSSUI A MAIOR SOMA: %d\n", pos);
	printf("SOMA DA LINHA %d: %d", pos, somaMaior);
	printf("\n\n");
		
	return 0;
}