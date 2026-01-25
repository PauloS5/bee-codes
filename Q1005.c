#include <stdio.h>

int main(void)
{
	double A, B, MEDIA;
	double pesoA, pesoB;
	
	pesoA = 3.5;
	pesoB = 7.5;
	
	scanf("%lf%lf", &A, &B);
	
	MEDIA = ((A * pesoA) + (B * pesoB)) / (pesoA + pesoB);
	
	printf("MEDIA = %.5lf", MEDIA);

	printf("\n");
    return 0;
}