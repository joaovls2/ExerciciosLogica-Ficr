#include <stdio.h>
#include <locale.h>

int main() {

	setlocale(LC_ALL, "pt_BR.UTF-8");

    int M[4][5];
    int linha = 0;
    int coluna = 0;
    int maior = 0;
    int i, j;

    printf("Digite os valores da matriz 4x5:\n");

    for(i = 0; i < 4; i++) {
        for(j = 0; j < 5; j++) {
            printf("M[%d][%d]: ", i, j);
            scanf("%d", &M[i][j]);
            
            if(M[i][j] > maior) {
				maior = M[i][j];
				linha = i;
				coluna = j; 
			}
        }
    }

    printf("\nMatriz digitada:\n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 5; j++) {
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }
 	
 	printf("\n\n");
 	printf("MAIOR ELEMENTO: %d\n", maior);
 	printf("POSICAO DO MAIOR ELEMENTO: LINHA %d | COLUNA %d", linha, coluna);
	
	return 0;
}