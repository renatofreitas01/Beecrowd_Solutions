/*********
Problem 1153
    Fatorial Simples
By Renato Freitas
**********/
#include <stdio.h>

int main() {

    int a, sum = 1;

    scanf("%d", &a);

    if (a > 0 && a < 13) {
        do {
            sum = sum * a;
            a = a - 1;
        } while (a > 1);

        printf("%d\n", sum);
    }
    return 0;
}