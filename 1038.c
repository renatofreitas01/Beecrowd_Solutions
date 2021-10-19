/*********
Problem 1038
    Lanche
By Renato Freitas
**********/
#include <stdio.h>
 
int main() {
 
    int a, b;
    float valor;
    
    scanf("%d %d", &a, &b);
    
    switch(a){
        case 1:
            valor = 4*b;
            break;
        case 2:
            valor = 4.5*b;
            break;
        case 3:
            valor = 5*b;
            break;
        case 4:
            valor = 2*b;
            break;
        case 5:
            valor = 1.5*b;
            break;
    }
    
    printf("Total: R$ %.2f\n", valor);
    
    return 0;
}