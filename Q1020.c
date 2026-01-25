#include <stdio.h>
 
int main() {
    int valor;
    
    scanf("%d", &valor);
    
	printf("%d ano(s)\n", (valor/365));
	valor = valor % 365;
	
	printf("%d mes(es)\n", (valor/30));
	valor = valor % 30;
	
	printf("%d dia(s)\n", valor);

    return 0;
}