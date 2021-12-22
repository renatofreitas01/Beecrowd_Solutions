/*********
Problem 1151
    Fibonacci Fácil
By Renato Freitas
**********/
#include <stdio.h>

int main() {

    int n, i, a = 0, b = 1, c;

    scanf("%d", &n);


    switch (n) {
        case 1:
            printf("0\n");
            break;
        case 2:
            printf("0 1\n");
            break;
        default:
            printf("0 1 ");
            n = n-2;
            for(i = 0; i < n; i ++){
                c = a + b;

                if (i != n - 1) {
                    printf("%d ", c);
                } else {
                    printf("%d\n", c);
                }

                a = b;
                b = c;
            }
            break;
    }
    return 0;
}