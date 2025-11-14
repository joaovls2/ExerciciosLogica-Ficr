#include <stdio.h>

int main() {

    int N, i, j;

    printf("Digite a ordem da matriz (N): ");
    scanf("%d", &N);

    int A[N][N], T[N][N];

    printf("\nDigite os elementos da matriz A:\n");

    for(i = 0; i < N; i++) {
        for(j = 0; j < N; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    
    
    for(i = 0; i < N; i++) {
        for(j = 0; j < N; j++) {
            T[i][j] = A[j][i];  
        }
    }

    printf("\nMatriz Transposta T:\n");
    for(i = 0; i < N; i++) {
        for(j = 0; j < N; j++) {
            printf("%d ", T[i][j]);
        }
        printf("\n");
    }

    return 0;
}
