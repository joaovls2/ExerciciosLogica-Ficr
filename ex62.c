#include <stdio.h>
#include <locale.h>

int main() {
	
	int A[3][3];
	int i, j;
	int ds = 0;
	
	printf("Digite os valores da matriz 3x3:\n");

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("M[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
            
            if(j == 2 - i) {
				ds += A[i][j];
			}
        }
    }
    
	printf("\nMatriz digitada:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
	
	printf("\n\n");
	printf("SOMA DA DIAGONAL PRINCIPAL: %d", ds);
	printf("\n\n");
	
	return 0;
}
