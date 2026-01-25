#include <stdio.h>

int main()
{
	double valor;
	int i;
	
	scanf("%lf", &valor);
	
	for (i = 0; i < 100; i++) {
		printf("N[%d] = %.4f\n", i, valor);
		valor /= 2.0000;
	}
}