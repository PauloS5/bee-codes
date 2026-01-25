#include <stdio.h>

int main()
{
	int i, j;
	char op;
	double temp;
	double res = 0.0;
	
	scanf(" %c", &op);
	
	for (i = 0; i < 12; i++) {
		for (j = 0; j < 12; j++) {
			scanf("%lf", &temp);
			if (
				i+j > 11
				&& j < i
			) {
				res += temp;
			}
		}
	}
	
	if (op == 'M') {
		res /= 30.0;
	}
	
	printf("%.1f\n", res);
	
	return 0;
}