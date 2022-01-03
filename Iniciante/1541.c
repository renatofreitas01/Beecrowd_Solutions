/*********
Problem 1541
    Construindo Casas
By Renato Freitas
**********/
#include <stdio.h>
#include <math.h>

int main() {
    int a = 1, b, c;
    int contas;

    while (a != 0) {
        scanf("%d", &a);
        if (a == 0) {
            break;
        } else {
            scanf("%d %d", &b, &c);

            if (a > 0 && b > 0 && c > 0 && a <= 1000 && b <= 1000 && c <= 1000) {
                contas = sqrt(100 * a * b / c);
                printf("%d\n", contas);
            }
        }
    }
    return 0;
}