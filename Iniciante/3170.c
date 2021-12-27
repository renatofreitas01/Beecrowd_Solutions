/*********
Problem 3170
    Bolinhas de Natal
By Renato Freitas
**********/
#include <stdio.h>

int main() {
    
    int b, g, r;
    scanf("%d %d", &b, &g);
    r = g/2 - b;
    if (r > 0)
        printf("Faltam %d bolinha(s)\n", r);
    else
        printf("Amelia tem todas bolinhas!\n");

    return 0;
}