#include <stdio.h>

int main() {
	char frase[] = {'L', 'I', 'F', 'E', ' ', 'I', 'S', ' ', 'N', 'O', 'T', ' ', 'A', ' ', 'P', 'R', 'O', 'B', 'L', 'E', 'M', ' ', 'T', 'O', ' ', 'B', 'E', ' ','S', 'O', 'L', 'V', 'E', 'D'};
	int n, i;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++) {
		printf("%c", frase[i]);
	}
	printf("\n");

    return 0;
}