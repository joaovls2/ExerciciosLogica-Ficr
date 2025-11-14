#include <stdio.h>
#include <locale.h>

void limparTela() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

int main() {
	
	int A[10];
	int B[10];
	int C[20];
	int i, j = 0;
	
	for(i = 0; i < 10; i++) {
		printf("Digite o %do numero (vetor A): ", i+1);
		scanf("%d", &A[i]);
	}
	
	limparTela();
	
	for(i = 0; i <10; i++) {
		printf("Digite o %do numero (vetor B): ", i+1);
		scanf("%d", &B[i]);
	}
	
	limparTela();
	
	for (i = 0; i < 10; i++) {
        C[j++] = A[i];  
        C[j++] = B[i];  
    }

    printf("Vetor C (intercalado):\n\n");
    
    for (i = 0; i < 20; i++) {
        printf("%d ", C[i]);
    }
	
	return 0;
}