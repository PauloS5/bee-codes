#include <stdio.h>

int main()
{
	// 3 50 51 52
	int i;
	unsigned long long int fib[61];
	int ncasos;
	
	fib[0] = 0;
	fib[1] = 1;
	for (i = 2; i < 61; i++) {
		fib[i] = fib[i-1] + fib[i-2];
 	}
 	
 	scanf("%d", &ncasos);
 	int casos[ncasos];
 	for (i = 0; i < ncasos; i++) {
		scanf("%d", &casos[i]);
	}
 	
 	for (i = 0; i < ncasos; i++) {
		printf("Fib(%d) = %llu\n", casos[i], fib[casos[i]]);
	}
}