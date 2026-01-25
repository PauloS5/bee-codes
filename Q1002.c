#include <stdio.h>

int main(void)
{
	double raio, A;
	const double PI = 3.14159;

	scanf("%lf", &raio);

	A = (raio * raio) * PI;

	printf("A=%.4lf", A);

	printf("\n");
	return 0;
}