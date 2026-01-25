#include <stdio.h>

int main()
{
	int caso, ncasos;
	int i, pos;
	int menor;
	
	scanf("%d", &ncasos);
	scanf("%d", &menor);
	pos = 0;
	for (i = 1; i < ncasos; i++) {
		scanf("%d", &caso);
		
		if (caso < menor) {
			menor = caso;
			pos = i;
		}
	}
	
	printf("Menor valor: %d\n", menor);
	printf("Posicao: %d\n", pos);
	
	return 0;
}