#include <stdio.h>

int main(void)
{
	double A, B, C;
	double pesoA, pesoB, pesoC;
	double MEDIA;
	
	pesoA = 2;
	pesoB = 3;
	pesoC = 5;
	
	scanf("%lf%lf%lf", &A, &B, &C);
	
	MEDIA = ((A * pesoA) + (B * pesoB) + (C * pesoC)) / (pesoA + pesoB + pesoC);
	
	printf("MEDIA = %.1lf", MEDIA);

	printf("\n");
    return 0;
}