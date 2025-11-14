#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "pt_BR.UTF-8");
	
	int i;
	char s, r; 
	int x = 0;
	int y = 0;
	float cf = 0.0;
	float cm = 0.0;
	float porc1, porc2;
	
	for(i = 1; i <= 20; i++) {
		printf("Digite o sexo [M, F]: ");
		scanf(" %c", &s);
		printf("Digite a resposta do entrevistado (S, N): ");
		scanf(" %c", &r);
		
		if(r == 'S' || r == 's') {
			x++;
		}
		
		if(r == 'N' || r == 'n') {
			y++;
		}
		
		if ((s == 'F' || s == 'f') && (r == 'S' || r == 's'))
            cf++;

        if ((s == 'M' || s == 'm') && (r == 'N' || r == 'n'))
            cm++;
	}
	
	if (x > 0)
        porc1 = (cf / x) * 100;
    else
        porc1 = 0;

    if (y > 0)
        porc2 = (cm / y) * 100;
    else
        porc2 = 0;
	
	printf("PESSOAS QUE RESPONDERAM (SIM): %d\n", x);
	printf("PESSOAS QUE RESPONDERAM (NAO): %d\n", y);
	printf("PORCENTAGEM DE MULHERES QUE RESPONDERAM (SIM): %.2f%%\n", porc1);
	printf("PORCENTAGEM DE HOMENS QUE RESPONDERAM (NAO): %.2f%%\n", porc2);
	
	return 0;
}