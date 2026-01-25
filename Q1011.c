#include <stdio.h>
#include <math.h>

int main(void)
{
	double raio, VOLUME;
	const double PI = 3.14159;
	
	scanf("%lf", &raio);
	
	VOLUME = (4.0/3.0) * PI * pow(raio, 3);
	
	printf("VOLUME = %.3lf", VOLUME);
	
	printf("\n");
	return 0;
}