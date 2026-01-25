#include <stdio.h>

int main()
{
	const int NUM_CASOS = 100;
	int i;
	float casos[NUM_CASOS];
	
	for (i = 0; i < NUM_CASOS; i++) {
		scanf("%f", &casos[i]);
	}
	
	for (i = 0; i < NUM_CASOS; i++) {
		if (casos[i] <= 10.0) {
			printf("A[%d] = %.1f\n", i, casos[i]);
		}
	}
	
	return 0;
}