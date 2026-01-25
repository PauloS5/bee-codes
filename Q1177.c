#include <stdio.h>

int main()
{
	int i, c;
	int T;
	int N[1000];
	
	scanf("%d", &T);
	
	c = 0;
	for (i = 0; i < 1000; i++) {
		N[i] = c++;
		if (c == T) {
			c = 0;
		}
	}
	
	for (i = 0; i < 1000; i++) {
		printf("N[%d] = %d\n", i, N[i]);
	}
}