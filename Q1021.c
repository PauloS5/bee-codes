#include <stdio.h>
 
int main() {
 
    double valor;
    int valorC;
    int quant100R, quant50R, quant20R, quant10R, quant5R, quant2R;
    int quant1R, quant50C, quant25C, quant10C, quant5C, quant1C;
 
 	scanf("%lf", &valor);
    valorC = (int)(valor * 100.0);
    
    quant100R = (int)(valorC/10000);
    valorC = valorC % 10000;
    quant50R = (int)(valorC/5000);
    valorC = valorC % 5000; 
    quant20R = (int)(valorC/2000);
    valorC = valorC % 2000;
    quant10R = (int)(valorC/1000);
    valorC = valorC % 1000;
    quant5R = (int)(valorC/500);
    valorC = valorC % 500;
    quant2R = (int)(valorC/200);
    valorC = valorC % 200;
    
    quant1R = (int)(valorC/100);
    valorC = valorC % 100;
    quant50C = (int)(valorC/50);
    valorC = valorC % 50;
    quant25C = (int)(valorC/25);
    valorC = valorC % 25;
    quant10C = (int)(valorC/10);
    valorC = valorC % 10;
    quant5C = (int)(valorC/5);
    valorC = valorC % 5;
    quant1C = valorC;
    
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", quant100R);
    printf("%d nota(s) de R$ 50.00\n", quant50R);
    printf("%d nota(s) de R$ 20.00\n", quant20R);
    printf("%d nota(s) de R$ 10.00\n", quant10R);
    printf("%d nota(s) de R$ 5.00\n", quant5R);
    printf("%d nota(s) de R$ 2.00\n", quant2R);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", quant1R);
    printf("%d moeda(s) de R$ 0.50\n", quant50C);
    printf("%d moeda(s) de R$ 0.25\n", quant25C);
    printf("%d moeda(s) de R$ 0.10\n", quant10C);
    printf("%d moeda(s) de R$ 0.05\n", quant5C);
    printf("%d moeda(s) de R$ 0.01\n", quant1C);
    
    return 0;
}