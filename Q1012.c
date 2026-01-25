#include <stdio.h>
#include <math.h>

int main(void)
{
	double A, B, C;
	double areaTri, areaCirc, areaTrap, areaQuad, areaRet;
	const double PI = 3.14159;
	
	scanf("%lf%lf%lf", &A, &B, &C);
	
	areaTri = (A * C) / 2;
	areaCirc = PI * pow(C, 2);
	areaTrap = ((A + B) * C) / 2;
	areaQuad = pow(B, 2);
	areaRet = A * B;
	
	printf("TRIANGULO: %.3lf\n", areaTri);
	printf("CIRCULO: %.3lf\n", areaCirc);
	printf("TRAPEZIO: %.3lf\n", areaTrap);
	printf("QUADRADO: %.3lf\n", areaQuad);
	printf("RETANGULO: %.3lf", areaRet);

	printf("\n");
	return 0;
}