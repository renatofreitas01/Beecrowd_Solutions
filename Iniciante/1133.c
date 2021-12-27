/*********
Problem 1133
    Resto da Divisão
By Renato Freitas
**********/
#include <stdio.h>

int main(){

    int n1, n2, aux, i;

    scanf("%d %d", &n1, &n2);

    if(n1>n2){
        aux = n1;
        n1 = n2;
        n2 = aux;
    }

    for(i = n1+1; i < n2; i++){
        if(i%5 == 2 || i%5 == 3){
            printf("%d\n", i);
        }
    }

    return 0;
}