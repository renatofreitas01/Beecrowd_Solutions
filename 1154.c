/*********
Problem 1154
    Idades
By Renato Freitas
**********/
#include <stdio.h>

int main() {

    int a, n = -1;
    float sum = 0;

    do{
        scanf("%d", &a);
        sum += a;
        n++;
    } while (a > 0);

    sum = (sum-a)/n;

    printf("%.2f\n", sum);

    return 0;
}