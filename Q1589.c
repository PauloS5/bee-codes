#include <stdio.h>

int main() {
	int n, i;
	int r1, r2;
	
	scanf("%d", &n);
	int resultados[n];
	
	for (i = 0; i < n; i++) {
		scanf("%d%d", &r1, &r2);
		
		resultados[i] = r1 + r2;
	}
	
	for (i = 0; i < n; i++) {
		printf("%d\n", resultados[i]);
	}
}