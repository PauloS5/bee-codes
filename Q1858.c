#include <stdio.h>

int main() {
	int n, i;
	int temp;
	int menor = 100, pos = 0;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++) {
		scanf("%d", &temp);
		if (temp < menor) {
			menor = temp;
			pos = i+1;
		}
	}
	
	printf("%d\n", pos);
}