#include <stdio.h>

int main(void)
{
	int codP1, codP2, quantP1, quantP2;
	double precoP1, precoP2;
	double ttl;

	scanf("%d%d%lf%d%d%lf", &codP1, &quantP1, &precoP1, &codP2, &quantP2, &precoP2);

	ttl = (quantP1 * precoP1) + (quantP2 * precoP2);

	printf("VALOR A PAGAR: R$ %.2lf", ttl);

	printf("\n");
    return 0;
}