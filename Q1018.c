#include <stdio.h>
 
int main() {
 
    int valorLido, valor;
    int quantC100, quantC50, quantC20, quantC10, quantC5, quantC2, quantC1;
 
    scanf("%d", &valorLido);
    valor = valorLido;
    
    quantC100 = (int)(valor/100);
    valor = valor % 100;
    
    quantC50 = (int)(valor/50);
    valor = valor % 50;
    
    quantC20 = (int)(valor/20);
    valor = valor % 20;
    
    quantC10 = (int)(valor/10);
    valor = valor % 10;
    
    quantC5 = (int)(valor/5);
    valor = valor % 5;
    
    quantC2 = (int)(valor/2);
    valor = valor % 2;
    
    // uantC1 = valor;
    
    quantC1 = (int)(valor/1);
    valor = valor % 1;
    
    printf("%d\n", valorLido);
    printf("%d nota(s) de R$ 100,00\n", quantC100);
    printf("%d nota(s) de R$ 50,00\n", quantC50);
    printf("%d nota(s) de R$ 20,00\n", quantC20);
    printf("%d nota(s) de R$ 10,00\n", quantC10);
    printf("%d nota(s) de R$ 5,00\n", quantC5);
    printf("%d nota(s) de R$ 2,00\n", quantC2);
    printf("%d nota(s) de R$ 1,00\n", quantC1);
    
    return 0;
}