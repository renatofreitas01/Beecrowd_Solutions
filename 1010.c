#include <stdio.h>
 
int main() {
    
    int a[2], b[2], i;
    float c[2], valor;
    
    for(i=0;i<2;i++){
        scanf("%d %d %f", &a[i], &b[i], &c[i]);
    }
    
    valor = (b[0]*c[0])+(b[1]*c[1]);
    
    printf("VALOR A PAGAR: R$ %.2f\n", valor);

    return 0;
}