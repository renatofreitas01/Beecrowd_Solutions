/*********
Problem 1150
    Ultrapassando Z
By Renato Freitas
**********/
#include <stdio.h>

int main() {

    int x, z, soma = 0, nmr = 0;

    scanf("%d", &x);
    do{
        scanf("%d", &z);
    } while (z <= x);

    do {
        soma += x;
        x++;
        nmr++;
    } while (soma < z);

    printf("%d\n", nmr);

    return 0;
}