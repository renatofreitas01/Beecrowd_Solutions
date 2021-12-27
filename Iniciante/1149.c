/*********
Problem 1149
    Somando Inteiros Consecutivos
By Renato Freitas
**********/
#include <stdio.h>

int main() {

    int a, n, z, soma = 0;

    scanf("%d %d", &a, &n);
    while (n <= 0) {
        scanf("%d", &n);
    }

    for(z = 1; z<=n; z++){
        soma += a;
        a++;
    }

    printf("%d\n", soma);
    return 0;
}