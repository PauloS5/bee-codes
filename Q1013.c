#include <stdio.h>

int valorAbsoluto(int A)
{
	return A < 0 ? -A : A;
}

int maior(int A, int B)
{
	return (A + B + valorAbsoluto(A - B)) / 2;
}

int main(void)
{
	int A, B, C;
	
	scanf("%d%d%d", &A, &B, &C);
	
	printf("%d eh o maior", maior(maior(A, B), C));

	printf("\n");
	return 0;
}