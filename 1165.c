/*********
Problem 1165
    Número Primo
By Renato Freitas
**********/
#include <stdio.h>

int main() {

    int n, i;

    scanf("%d", &n);

    if (n >= 1 && n <= 100) {
        for(i = 0; i < n; i++){
            int x, j, cont = 0;
            scanf("%d", &x);

            for(j = 1; j < x; j++){
                if(x%j == 0){
                    cont++;
                }
            }
            if(cont == 1 || x == 1){
                printf("%d eh primo\n", x);
            } else {
                printf("%d nao eh primo\n", x);
            }
        }
    }
    return 0;
}