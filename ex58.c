#include <stdio.h>
#include <locale.h>

int main() {
	
	int A[10];
	int B[10];
	int i;
	int j = 9;
	
	for(i = 0; i < 10; i++) {
		printf("Digite o %do numero (vetor A): ", i+1);
		scanf("%d", &A[i]);
	}
	
	for(i = 0; i < 10; i++) {
		B[j] = A[i];
		j--;
	}
	
	printf("Valores invertido (Vetor B): \n\n");
	
	for(i = 0; i < 10; i++) {
		printf("%d\n", B[i]);
	}
	
	
	
	return 0;
}