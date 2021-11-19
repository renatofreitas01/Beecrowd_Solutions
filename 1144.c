/*********
Problem 1144
    Sequência Lógica
By Renato Freitas
**********/
#include <stdio.h>
#include <math.h>

int main() {

    int n, i, j;

    scanf("%d", &n);

    if (n > 1 && n < 1000) {
        for (i = 1; i <= n; i++) {
            for (j = 1; j < 4; j++) {
                if(j < 3){
                    printf("%.0f ", pow(i,j));
                } else{
                    printf("%.0f\n", pow(i,j));
                }
            }
            for (j = 1; j < 4; j++) {

                if(j == 1){
                    printf("%.0f ", pow(i,j));
                }else if(j == 2){
                    printf("%.0f ", pow(i,j)+1);
                } else{
                    printf("%.0f\n", pow(i,j)+1);
                }
            }
        }
    }
    return 0;
}