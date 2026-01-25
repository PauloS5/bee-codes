#include <stdio.h>
 
int main() {
    int valor;
    
    scanf("%d", &valor);
    
	printf("%d:", (valor/3600));
	valor = valor % 3600;
	
	printf("%d:", (valor/60));
	valor = valor % 60;
	
	printf("%d\n", valor);

    return 0;
}