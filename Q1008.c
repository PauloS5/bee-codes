#include <stdio.h>

int main(void)
{
	int NUMBER, horas;
	double valorHora, SALARY;
	
	scanf("%d%d%lf", &NUMBER, &horas, &valorHora);
	
	SALARY = valorHora * horas;
	
	printf("NUMBER = %d\n", NUMBER);
	printf("SALARY = U$ %.2lf", SALARY);
	
	printf("\n");
    return 0;
}