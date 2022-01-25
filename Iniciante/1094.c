/*********
Problem 1094
    Experiências
By Renato Freitas
**********/
#include <stdio.h>
#include <string.h>

int main() {

    int n;
    int i, aux = 0;
    int soma = 0, nC = 0, nR = 0, nS = 0;
    char str[2];

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d %s", &aux, str);
        if (strcmp(str, "C") == 0) {
            nC += aux;
        } else if (strcmp(str, "R") == 0) {
            nR += aux;
        } else if (strcmp(str, "S") == 0) {
            nS += aux;
        }
        soma += aux;
    }

    double pC = nC, pR = nR, pS = nS;
    pC = pC / soma * 100;
    pR = pR / soma * 100;
    pS = pS / soma * 100;

    printf("Total: %d cobaias\n", soma);
    printf("Total de coelhos: %d\n", nC);
    printf("Total de ratos: %d\n", nR);
    printf("Total de sapos: %d\n", nS);
    printf("Percentual de coelhos: %.2f %\n", pC);
    printf("Percentual de ratos: %.2f %\n", pR);
    printf("Percentual de sapos: %.2f %\n", pS);
    return 0;
}