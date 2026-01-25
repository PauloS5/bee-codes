#include <stdio.h>

int main() {
	int casos[1000];
	int q_casos = 0;
	int i;
	
	for ( i = 0; i < 1000; i++) {
		if (scanf("%d", &casos[i]) == EOF) {
			break;
		}
		q_casos++;
	}
	
	for (i = 0; i < q_casos; i++) {
		if (casos[i] > 0) {
			printf("vai ter duas!\n");
		} else {
			printf("vai ter copa!\n");
		}
	}
}