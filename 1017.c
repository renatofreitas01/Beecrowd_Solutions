#include <stdio.h>

int main() {
    
    int a,b;
    float valor;
    
    scanf("%d %d", &a, &b);

    valor = a*b/12.0;
        
    printf("%.3f\n", valor);
    
    return 0;
}