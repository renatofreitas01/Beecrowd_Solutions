#include <stdio.h>
 
int main() {
    
    double n1, n2, salario;
    char nome[100];
    
    gets (nome);
    
    scanf("%lf %lf", &n1, &n2);
    
    salario = n1+(0.15*n2);
    
    printf("TOTAL = R$ %.2lf\n", salario);
    
    return 0;
}