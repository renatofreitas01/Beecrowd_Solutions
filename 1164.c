/*********
Problem 1164
    Número Perfeito
By Renato Freitas
**********/
#include <stdio.h>

int main() {

    int n, i;

    scanf("%d", &n);

    if (n >= 1 && n <= 20) {
        for(i = 0; i < n; i++){
            int x, j, sum = 0;
            scanf("%d", &x);

            for(j = 1; j < x; j++){
                if(x%j == 0){
                    sum += j;
                }
            }
            if(sum == x){
                printf("%d eh perfeito\n", x);
            } else {
                printf("%d nao eh perfeito\n", x);
            }
        }
    }
    return 0;
}