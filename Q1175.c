#include <stdio.h>

int main()
{
	const int NUM_CASOS = 20;
	int i;
	int casos[NUM_CASOS];
	int temp;
	
	for (i = 0; i < NUM_CASOS; i++) {
		scanf("%d", &casos[i]);
	}
	
	for (i = 0; i < NUM_CASOS/2; i++) {
		temp = casos[0+i];
		casos[0+i] = casos[NUM_CASOS-1-i];
		casos[NUM_CASOS-1-i] = temp;
	}
	
	for (i = 0; i < NUM_CASOS; i++) {
		printf("N[%d] = %d\n", i, casos[i]);
	}
	
	return 0;
}