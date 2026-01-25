#include <stdio.h>
#include <math.h>

int main() {
	int n, i;
	
	scanf("%d", &n);
	int valores[n];
	
	for (i = 0; i < n; i++) {
		scanf("%d", &valores[i]);
	}
	
	for (i = 0; i < n; i++) {
		if (valores[i] % 2 == 1) {
			printf("1\n");
		} else {
			printf("0\n");
		}
	}
	
	return 0;
}