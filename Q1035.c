#include <stdio.h>
 
int main() {
 
    int A, B, C, D;
    
    scanf("%d%d%d%d", &A, &B, &C, &D);
    
    if (!((B > C) && (D > A))) {
        printf("Valores nao aceitos\n");
        return 0;
    }
    
    if (!((C+D) > (A+B))) {
        printf("Valores nao aceitos\n");
        return 0;
    }
    
    if (!((C >= 0) && (D >= 0))) {
        printf("Valores nao aceitos\n");
        return 0;
    }
    
    if (!((A % 2) == 0)) {
        printf("Valores nao aceitos\n");
        return 0;
    }
    
    printf("Valores aceitos\n");
    
    return 0;
}