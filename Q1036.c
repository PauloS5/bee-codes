#include <stdio.h>
#include <math.h>
 
int main() {
    double a, b, c;
    double delta, R1, R2;
    
    scanf("%lf%lf%lf", &a, &b, &c);
    
    delta = (b*b) - (4.0*a*c);
    
    if (delta <= 0.0) {
        printf("Impossivel calcular\n");
        return 0;
    }
    
    R1 = ((-1.0 * b) + sqrt(delta))/(2.0*a);
    R2 = ((-1.0 * b) - sqrt(delta))/(2.0*a);
    
    if (isnan(R1) || isnan(R2)) {
    	printf("Impossivel calcular\n");
        return 0;
	}
    
    printf("R1 = %.5f\n", R1);
    printf("R2 = %.5f\n", R2);
 
    return 0;
}