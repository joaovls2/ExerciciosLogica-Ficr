#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void limparTela() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

int main() {
	
	setlocale(LC_ALL, "pt_BR.UTF-8");
	
	int A[10];
	int B[10];
	int C[10];
	int i;
	
	for(i = 0; i <10; i++) {
		printf("Digite o %do numero (vetor A): ", i+1);
		scanf("%d", &A[i]);
	}
	
	limparTela();
	
	for(i = 0; i <10; i++) {
		printf("Digite o %do numero (vetor B): ", i+1);
		scanf("%d", &B[i]);
	}
	
	printf("\n");
	printf("Vetor A + Vetor B = Vetor C\n");
	printf("\n");
	
	for(i = 0; i <10; i++) {
		C[i] = A[i] + B[i];
		printf("%d + %d = %d\n", A[i], B[i], C[i]);
	}
	
	printf("\n");
	
	return 0;
}