#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "pt_BR.UTF-8");
	
    float valorCompra, valorPago, troco;
    
    int cedula100 = 10000, cedula50 = 5000, cedula20 = 2000, cedula10 = 1000, cedula5 = 500, cedula2 = 200;
    int moeda1 = 100, moeda50 = 50, moeda25 = 25, moeda10 = 10, moeda05 = 5, moeda01 = 1;

    printf("Digite o valor da compra: ");
    scanf("%f", &valorCompra);
    
    printf("Digite o valor pago pelo cliente: ");
    scanf("%f", &valorPago);
    
    troco = (valorPago - valorCompra) * 100;
    
    if (troco < 0) {
        printf("Valor pago e insuficiente!\n");
        return 1;
    }
    
    printf("\nTroco: R$ %.2f\n", troco / 100);  // Exibe o troco em reais
    
    printf("Cedulas:\n");
    printf("%d cedula(s) de R$ 100.00\n", (int)(troco / cedula100));
    troco = troco - (int)(troco / cedula100) * cedula100;

    printf("%d cedula(s) de R$ 50.00\n", (int)(troco / cedula50));
    troco = troco - (int)(troco / cedula50) * cedula50;
    
    printf("%d cedula(s) de R$ 20.00\n", (int)(troco / cedula20));
    troco = troco - (int)(troco / cedula20) * cedula20;
    
    printf("%d cedula(s) de R$ 10.00\n", (int)(troco / cedula10));
    troco = troco - (int)(troco / cedula10) * cedula10;
    
    printf("%d cedula(s) de R$ 5.00\n", (int)(troco / cedula5));
    troco = troco - (int)(troco / cedula5) * cedula5;
    
    printf("%d cedula(s) de R$ 2.00\n", (int)(troco / cedula2));
    troco = troco - (int)(troco / cedula2) * cedula2;
    
    printf("\nMoedas:\n");
    printf("%d moeda(s) de R$ 1.00\n", (int)(troco / moeda1));
    troco = troco - (int)(troco / moeda1) * moeda1;
    
    printf("%d moeda(s) de R$ 0.50\n", (int)(troco / moeda50));
    troco = troco - (int)(troco / moeda50) * moeda50;
    
    printf("%d moeda(s) de R$ 0.25\n", (int)(troco / moeda25));
    troco = troco - (int)(troco / moeda25) * moeda25;
    
    printf("%d moeda(s) de R$ 0.10\n", (int)(troco / moeda10));
    troco = troco - (int)(troco / moeda10) * moeda10;
    
    printf("%d moeda(s) de R$ 0.05\n", (int)(troco / moeda05));
    troco = troco - (int)(troco / moeda05) * moeda05;

    return 0;
}
