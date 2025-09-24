#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese, Brazil");
	int A, B, C;
	
	printf("Digite o valor de A: ");
	scanf("%d", &A);
	printf("Digite o valor de B: ");
	scanf("%d", &B);
	printf("A = %d\nB = %d\n", A, B);
	C = A;
	A = B;
	B = C;
	printf("Valores trocados:\nA = %d\nB = %d", A, B);
		
	return 0;
}