#include <stdio.h>

int main(void)
{
	char* nome;
	double salario, ttlVendas, ttl;
	
	scanf("%s%lf%lf", &nome, &salario, &ttlVendas);
	
	ttl = salario + (0.15 * ttlVendas);
	
	printf("TOTAL = R$ %.2lf", ttl);

	printf("\n");
    return 0;
}