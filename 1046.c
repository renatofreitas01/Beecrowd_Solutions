#include <stdio.h>
 
int main() {
    
    int a, b, valor;
    
    scanf("%d %d", &a, &b);
    
    if(b > a){
        valor = b-a;
    } else if(a > b){
        valor = 24 - a + b;
    } else {
        valor = 24;
    }
    
    printf("O JOGO DUROU %d HORA(S)\n", valor);
    
    return 0;
}