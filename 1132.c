/*********
Problem 1132
    Múltiplos de 13
By Renato Freitas
**********/
#include <stdio.h>

int main(){

    int n1, n2, aux, i, soma = 0;

    scanf("%d %d", &n1 ,&n2);

    if(n1 > n2){
        aux = n1;
        n1 = n2;
        n2 = aux;
    }

    for(i = n1; i <= n2; i++){
        if(i%13 != 0){
            soma = soma + i;
        }
    }

    printf("%d\n", soma);

    return 0;
}