#include <stdio.h>

int main(void)
{
	int X;
	float Y;
	float consumo;
	
	scanf("%d%f", &X, &Y);
	
	consumo = X / Y;
	
	printf("%.3lf km/l", consumo);
	
	printf("\n");
	return 0;
}