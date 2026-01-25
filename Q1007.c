#include <stdio.h>

int main(void)
{
	int A, B, C, D;
	int DIFERENCA;
	
	scanf("%d%d%d%d", &A, &B, &C, &D);
	
	DIFERENCA = (A * B) - (C * D);
	
	printf("DIFERENCA = %d", DIFERENCA);
	
	printf("\n");
    return 0;
}