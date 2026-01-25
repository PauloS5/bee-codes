#include <stdio.h>
#include <math.h>

int main()
{
	// 1 2 3 4 5 0
	
	void gerarMatriz(int ordem) {
		int i, j;
		int matriz[ordem][ordem];
		for (i = 0; i < ordem; i++) {
	  		for (j = 0; j < ordem; j++) {
	  			int dist_xp = j;
	  			int dist_yp = i;
	  			int dist_xn = ordem-1-j;
	  			int dist_yn = ordem-1-i;
	  			int menor_dist = (int)fmin(fmin(dist_xp, dist_yp), fmin(dist_xn, dist_yn));

	  			if (menor_dist+1 < 10) {
	  				printf("  ");
				} else if (menor_dist+1 < 100) {
					printf(" ");
				}
	  			printf("%d", 1 + menor_dist);
	  			if (j < ordem-1) {
					printf(" ");
				}
			}
			if (i < ordem-1) {
				printf("\n");
			}
		}
	}

	int casos[100];
	int temp;
	int c_casos = 0;
	int i;

	while (1) {
		scanf("%d", &temp);
		if (temp != 0) {
			casos[c_casos++] = temp;
		} else {
			break;
		}
	}

	for (i = 0; i < c_casos; i++) {
		gerarMatriz(casos[i]);
		if (i < c_casos-1) {
			printf("\n\n");
		}
	}
	printf("\n\n");
	return 0;
}