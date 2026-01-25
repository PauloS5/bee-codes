#include <stdio.h>

int main()
{
	int i, j;
	int c;
	char op;
	double res = 0.0;
	double temp;
	
	scanf("%d", &c);
	scanf(" %c", &op);
	
	for (i = 0; i < 12; i++) {
		for (j = 0; j < 12; j++) {
			scanf("%lf", &temp);
			
			if (j == c) {
				res += temp;
			}
		}
	}
	
	if (op == 'M') {
		res /= 12.0;
	}
	
	printf("%.1f\n", res);
	
	return 0;
}